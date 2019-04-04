--test file that doesn't have 300k lines of lua table code ;)
resources = {
	
	{
	name = "Ababuglu",

	type = "copper_borocarbitic",
		
	classes = {

		{"Inorganic", "inorganic"},

		{"Mineral", "mineral"},
	
		{"Metal", "metal"},

		{"Non-Ferrous Metal", "metal_nonferrous"},

		{"Copper", "copper"},
			
		{"Conductive Borcarbitic Copper", "copper_borocarbitic"},

		},


	attributes = {

		{"res_cold_resist", 184},
		
		{"res_conductivity", 539},

		{"res_decay_resist", 906},
			
		{"res_heat_resist", 86},
			
		{"res_malleability", 349},
			
		{"res_quality", 469},
			
		{"res_shock_resistance", 344},
			
		{"res_toughness", 598},

		},


	zoneRestriction = "",

	surveyToolType = 6,
	containerCRC = 3684838486,

	},



	{

	name = "Abayquily",

	type = "bone_horn_rori",

	classes = {

		{"Organic", "organic"},

		{"Creature Resources", "creature_resources"},

		{"Creature Structural", "creature_structural"},
	
		{"Horn", "bone_horn"},

		{"Rori Horn", "bone_horn_rori"},

		},

	attributes = {

			{"res_decay_resist", 616},

			{"res_malleability", 172},

			{"res_quality", 424},

			{"res_shock_resistance", 301},

			{"res_toughness", 98},

		},

	zoneRestriction = "rori",
	
	surveyToolType = -1,

	containerCRC = 1001781097,

	},

    {
		name = "Abiblo",
		type = "milk_wild_yavin4",
		classes = {
			{"Organic", "organic"},
			{"Creature Resources", "creature_resources"},
			{"Creature Food", "creature_food"},
			{"Milk", "milk"},
			{"Wild Milk", "milk_wild"},
			{"Yavin IV Wild Milk", "milk_wild_yavin4"},
		},
		attributes = {
			{"res_decay_resist", 159},
			{"res_flavor", 439},
			{"res_potential_energy", 303},
			{"res_quality", 122},
		},
		zoneRestriction = "yavin4",
		surveyToolType = -1,
		containerCRC = 2928137621,
	},

    {
		name = "Able",
		type = "fruit_fruits_dantooine",
		classes = {
			{"Organic", "organic"},
			{"Flora Resources", "flora_resources"},
			{"Flora Food", "flora_food"},
			{"Seeds", "seeds"},
			{"Fruit", "fruit"},
			{"Fruits", "fruit_fruits"},
			{"Dantooine Fruit", "fruit_fruits_dantooine"},
		},
		attributes = {
			{"res_decay_resist", 828},
			{"res_flavor", 626},
			{"res_potential_energy", 182},
			{"res_quality", 523},
		},
		zoneRestriction = "dantooine",
		surveyToolType = 3,
		containerCRC = 1808675396,
	}
}

--print("hello world");

