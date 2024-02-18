package;

import haxe.io.Bytes;
import haxe.io.Path;
import lime.utils.AssetBundle;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

#if disable_preloader_assets
@:dox(hide) class ManifestResources {
	public static var preloadLibraries:Array<Dynamic>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;

	public static function init (config:Dynamic):Void {
		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();
	}
}
#else
@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {


	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;


	public static function init (config:Dynamic):Void {

		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();

		rootPath = null;

		if (config != null && Reflect.hasField (config, "rootPath")) {

			rootPath = Reflect.field (config, "rootPath");

			if(!StringTools.endsWith (rootPath, "/")) {

				rootPath += "/";

			}

		}

		if (rootPath == null) {

			#if (ios || tvos || webassembly)
			rootPath = "assets/";
			#elseif android
			rootPath = "";
			#elseif (console || sys)
			rootPath = lime.system.System.applicationDirectory;
			#else
			rootPath = "./";
			#end

		}

		#if (openfl && !flash && !display)
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_determination_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_monsterfriendf_otf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_monsterrat_ttf);
		
		#end

		var data, manifest, library, bundle;

		Assets.libraryPaths["default"] = rootPath + "manifest/default.json";
		

		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		

	}


}

#if !display
#if flash

@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_credits_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_data_goes_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_fonts_determination_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_fonts_monsterfriendf_otf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_chara_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_chara_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_dustchara_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_flags_mexico_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_flags_usa_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_images_go_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_logo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_maps_the_ruins_toriel_home_croom_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_maps_the_ruins_toriel_home_kitchen_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_maps_the_ruins_toriel_home_living_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_maps_the_ruins_toriel_home_rooms_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_maps_the_ruins_toriel_home_stairs_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_maps_the_ruins_toriel_home_troom_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_maps_the_ruins_zone_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_maps_the_ruins_zone_10__cheese__png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_maps_the_ruins_zone_11_a_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_maps_the_ruins_zone_11_b_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_maps_the_ruins_zone_12_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_maps_the_ruins_zone_13_a_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_maps_the_ruins_zone_13_b_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_maps_the_ruins_zone_14_a_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_maps_the_ruins_zone_14_b_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_maps_the_ruins_zone_15_a_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_maps_the_ruins_zone_15_b_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_maps_the_ruins_zone_16_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_maps_the_ruins_zone_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_maps_the_ruins_zone_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_maps_the_ruins_zone_4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_maps_the_ruins_zone_5_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_maps_the_ruins_zone_6_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_maps_the_ruins_zone_7_a_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_maps_the_ruins_zone_7_b_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_maps_the_ruins_zone_7_c_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_maps_the_ruins_zone_8_a_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_maps_the_ruins_zone_8_b_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_maps_the_ruins_zone_9_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_soul_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_textbox_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_trophies_begin_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_trophies_logged_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_choose_back_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_choose_backspace_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_choose_choose_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_choose_done_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_choose_namethem_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_choose_no_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_choose_quit_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_choose_secrets_alphys_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_choose_secrets_angel_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_choose_secrets_batman_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_choose_secrets_daddy_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_choose_secrets_dumm_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_choose_secrets_friends_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_choose_secrets_frisk_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_choose_secrets_mommy_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_choose_secrets_naps_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_choose_secrets_papyrus_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_choose_secrets_sans_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_choose_secrets_skill_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_choose_secrets_spider_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_choose_secrets_the_creator_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_choose_secrets_toriel_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_choose_secrets_tracer_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_choose_secrets_undyne_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_choose_warning_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_choose_yes_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_continue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_gamejolt_auth_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_gamejolt_authagain_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_gamejolt_back_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_gamejolt_error_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_gamejolt_success_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_gamejolt_username_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_img_options_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_img_trophies_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_newgame_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_options_lang_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_options_langs_eng_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_options_langs_esp_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_options_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_trophies_begin_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_trophies_logged_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_trophies_secret_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_trophies_welcome_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_english_trophies_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_choose_back_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_choose_backspace_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_choose_choose_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_choose_done_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_choose_namethem_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_choose_no_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_choose_quit_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_choose_secrets_alphys_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_choose_secrets_angel_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_choose_secrets_batman_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_choose_secrets_daddy_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_choose_secrets_dumm_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_choose_secrets_friends_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_choose_secrets_frisk_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_choose_secrets_logan_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_choose_secrets_lukas_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_choose_secrets_mommy_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_choose_secrets_naps_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_choose_secrets_papyrus_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_choose_secrets_sans_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_choose_secrets_skill_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_choose_secrets_spider_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_choose_secrets_the_creator_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_choose_secrets_toriel_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_choose_secrets_tracer_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_choose_secrets_undyne_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_choose_warning_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_choose_yes_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_continue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_gamejolt_auth_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_gamejolt_authagain_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_gamejolt_back_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_gamejolt_error_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_gamejolt_success_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_gamejolt_username_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_img_options_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_img_trophies_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_newgame_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_options_lang_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_options_langs_eng_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_options_langs_esp_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_options_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_trophies_begin_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_trophies_logged_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_trophies_secret_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_trophies_welcome_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_langs_spanish_trophies_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_music_goes_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_alphysfix_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_badnote1_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_badnote2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_badnote3_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_bgflamea_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_birdnoise_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_chime_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_churchbell_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_computer_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_create_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_crickets_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_cymbal_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_dialup_0_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_dialup_1_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_dialup_2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_dialup_3_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_dialup_4_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_dialup_5_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_disturbing_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_dogappear_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_doorclose_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_dooropen_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_drone_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_drumcuica_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_drumcuica2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_drumcymbal_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_drumkick_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_drumsnare_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_dununnn_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_elevator_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_elevator_last_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_explosion_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_fearsting_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_f_alarm_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_f_destroyed_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_f_destroyed2_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_f_destroyed3_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_f_endnote_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_f_glock_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_f_laugh_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_f_newlaugh_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_f_newlaugh_low_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_f_noise_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_f_orchhit_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_f_orchhit_l_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_harpnoise_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_intronoise_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_mettsmash_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_mett_applause_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_mett_cheer_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_mode_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_mt_yeah_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_myemeow_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_note1_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_note2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_note3_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_note4_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_note5_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_note6_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_ohyes_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_piano1_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_piano2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_piano3_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_piano4_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_piano5_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_piano6_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_piano7_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_piano8_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_piano9_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_pianoa_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_rimshot_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_rotate_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_abreak_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_abreak2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_ahh_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_a_bullet_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_a_gigatalk_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_a_grab_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_a_lithit_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_a_lithit2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_a_pullback_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_a_swipe_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_a_swordappear_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_a_target_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_bookspin_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_chainsaw_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_cinematiccut_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_eyeflash_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_frypan_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_generate_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_gigapunch_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_gunshot_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_hypergoner_charge_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_hypergoner_laugh_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_oh_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_rainbowbeam_1_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_rainbowbeam_hold_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_segapower_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_segapower2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_sparkles_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_spellcast_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_star_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_swipe_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_ted_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_voice_jafe_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_voice_ted_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_voice_triple_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sfx_yowl_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_singf_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_singg_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_singvoice_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_snowwalk_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_sticksnap_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_tone2_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_tone3_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_wawa_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_mus_whoopee_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_arrow_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_b_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_ballchime_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_battlefall_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_bell_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_bigdoor_open_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_block2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_bluh_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_bomb_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_bombfall_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_bombsplosion_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_break1_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_break1_c_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_break2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_break2_c_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_breaka_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_breakb_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_breakc_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_buyitem_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_buzzing_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_catsalad_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_chug_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_credit_s_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_curtgunshot_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_damage_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_damage_c_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_dimbox_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_doghurt1_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_dogresidue_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_dogsalad_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_drumroll_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_dumbvictory_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_ehurt1_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_elecdoor_close_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_elecdoor_open_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_elecdoor_shut_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_elecdoor_shutheavy_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_escaped_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_fall_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_fall2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_flameloop_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_floweylaugh_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_floweytalk1_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_floweytalk2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_gameover_broken_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_glassbreak_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_grab_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_grandpatemi_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_heal_c_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_heartshot_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_heavydamage_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_hero_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_hit_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_hurt1_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_hurt1_c_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_hurtbeef_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_hurtbig_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_hurtbuzz_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_hurtdragon_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_hurtgirl_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_hurtlaugh_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_hurtloox_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_hurtsmall_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_impact_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_instanoise_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_item_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_knock_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_laz_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_laz_c_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_levelup_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_lightswitch_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_magicminer_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_movemenu_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_mtt1_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_mtt2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_mtt3_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_mtt4_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_mtt5_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_mtt6_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_mtt7_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_mtt8_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_mtt9_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_mtt_burst_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_mtt_hit_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_mtt_prebomb_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_mushroomdance_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_mysterygo_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_noise_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_nosound_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_oddtalk1_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_oddtalk2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_phone_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_pombark_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_power_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_punchstrong_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_punchweak_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_saber3_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_save_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_screenshake_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_select_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_shadowpendant_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_shakerbreaker_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_shock_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_slidewhist_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_sparkle1_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_spearappear_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_spearrise_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_speedup_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_splash_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_splash_2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_spooky_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_squeak_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_swallow_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_switchpull_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_switchpull_n_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_tearcard_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_tem_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_tem2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_tem3_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_tem4_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_tem5_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_tem6_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_tempbell_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_test_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_textnoise_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_txt1_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_txt2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_txtal_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_txtasg_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_txtasr_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_txtasr2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_txtpap_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_txtsans_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_txtsans2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_txttor_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_txttor2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_txttor3_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_txtund_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_txtund2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_txtund3_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_txtund4_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_txtund_hyper_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_undynedis_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_undynestep_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_vaporized_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_victor_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_vulkinhurt_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_wngdng1_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_wngdng2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_wngdng3_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_wngdng4_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_wngdng5_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_wngdng6_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_wngdng7_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_wonderfulidea_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_wonderfulidea_ja_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_wrongvictory_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_snd_yeah_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:keep @:file("C:/haxelib/flixel/5,6,0/assets/sounds/beep.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_ogg extends haxe.io.Bytes {}
@:keep @:file("C:/haxelib/flixel/5,6,0/assets/sounds/flixel.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends haxe.io.Bytes {}
@:keep @:font("C:/haxelib/flixel/5,6,0/assets/fonts/nokiafc22.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font {}
@:keep @:font("C:/haxelib/flixel/5,6,0/assets/fonts/monsterrat.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font {}
@:keep @:image("C:/haxelib/flixel/5,6,0/assets/images/ui/button.png") @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends lime.graphics.Image {}
@:keep @:image("C:/haxelib/flixel/5,6,0/assets/images/logo/default.png") @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends lime.graphics.Image {}

@:keep @:noCompletion #if display private #end class __ASSET__assets_fonts_determination_ttf extends lime.text.Font { public function new () { __fontPath = ManifestResources.rootPath + "assets/fonts/determination.ttf"; name = "Determination Mono Web Regular"; super (); }}
@:keep @:noCompletion #if display private #end class __ASSET__assets_fonts_monsterfriendf_otf extends lime.text.Font { public function new () { __fontPath = ManifestResources.rootPath + "assets/fonts/MonsterFriendF.otf"; name = "Monster Friend Fore"; super (); }}


#else

@:keep @:expose('__ASSET__assets_fonts_determination_ttf') @:noCompletion #if display private #end class __ASSET__assets_fonts_determination_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "assets/fonts/determination.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Determination Mono Web Regular"; super (); }}
@:keep @:expose('__ASSET__assets_fonts_monsterfriendf_otf') @:noCompletion #if display private #end class __ASSET__assets_fonts_monsterfriendf_otf extends lime.text.Font { public function new () { #if !html5 __fontPath = "assets/fonts/MonsterFriendF.otf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Monster Friend Fore"; super (); }}
@:keep @:expose('__ASSET__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/nokiafc22.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Nokia Cellphone FC Small"; super (); }}
@:keep @:expose('__ASSET__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/monsterrat.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Monsterrat"; super (); }}


#end

#if (openfl && !flash)

#if html5
@:keep @:expose('__ASSET__OPENFL__assets_fonts_determination_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_determination_ttf extends openfl.text.Font { public function new () { name = "Determination Mono Web Regular"; super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_monsterfriendf_otf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_monsterfriendf_otf extends openfl.text.Font { public function new () { name = "Monster Friend Fore"; super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#else
@:keep @:expose('__ASSET__OPENFL__assets_fonts_determination_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_determination_ttf extends openfl.text.Font { public function new () { __fontPath = ManifestResources.rootPath + "assets/fonts/determination.ttf"; name = "Determination Mono Web Regular"; super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_monsterfriendf_otf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_monsterfriendf_otf extends openfl.text.Font { public function new () { __fontPath = ManifestResources.rootPath + "assets/fonts/MonsterFriendF.otf"; name = "Monster Friend Fore"; super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#end

#end
#end

#end