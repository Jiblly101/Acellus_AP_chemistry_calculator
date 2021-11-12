#include <iostream>
#include <cmath>
//go to C:\Users\jibll\source\repos\All_Science_Math_Calculators

int main()
{
	char Number;//can't reuse
	int MN; //mass number
	int AN; //atomic number
	int Charge;
	int neutron;
	int proton;
	int electron;
	float A;
	float B;
	float C;
	float D;
	float E;
	float WA;
	float WB;
	float WC;
	float WD;
	float WE;
	float POA; //percentage of a
	float POB; //percentage of b
	float POC; //percentage of c
	float POD; //percentage of d
	float POE;
	float total;
	float PE; //percent error, cant reuse
	float AMU; //atomic mass unit
	int HP = 2; //how presice
	int YN; //yes or no, cant reuse
	float AAM; //average atomic mass
	int AR; //actual or relitive 1 or 0 respectivly, can't reuse
	int YNRA; //yes or no for relitive or actual intenisty, can't reuse
	int MTAMU; //amount more terms for AMU
	float ANumber;
	float HydrogenNumber;
	float OxygenNumber;
	float NitrogenNumber;
	float CarbonNumber;
	float sulphorNumber;
	float otherNumber = 0;
	char ext;
	char HAM;//have any more?
	float HMM;//how many moles
	char CHNOSO;//carbon, hydrogen, nitrogen, oxygen, or other
	float CWg;//carbon weight in grams
	float HWg;
	float NWg;
	float OWg;
	float SWg;
	float OTWg;//other weight grams
	char WgC;
	float g;//grams
	float GtM;
	float HATW;
	float CATW;
	float NATW;
	float OATW;
	float SATW;
	float OTATW;
	char HCNOO;
	float hg;
	float cg;
	float ng;
	float og;
	float sg;
	float otg;
	char MOG;
	float hyA;
	float caA;
	float niA;
	float oxA;
	float suA;
	float otA;
	float otW;
	float Gtotal;
	float GTOTAL1;
	float HMG;
	float WSf;//can't reuse
	float hmc;
	float hmh;
	float hmn;
	float hmo;
	float hms;
	float ito;
	float POTATO_SNURGLEMUMPHKIN;

	//atoms number and AMU
	int HydrogenAtomicNumber = 1;
	float HydrogenAMU = 1.01;
	int OxyegenAtomicNumber = 6;
	float OxygenAMU = 16;
	int NitrogenAtomicNumber = 7;
	float NitrogenAMU = 14.01;
	int CarbonAtomicNumber = 8;
	float CarbonAMU = 12.01;
	int sulphorAtomicNumber = 16;
	float sulphorAMU = 32;
	float otherAMU = 0;
	int otherAtomicNumber;
	float CHNOTotal;
	float CHNOP;//chno percentage

	//start
	std::cout << "what calculation do you want to do" << std::endl;
	std::cout << "press 1, 2, 3, etc" << std::endl;
	std::cout << "type 0 for help" << std::endl;
	std::cin >> Number;

	//help
	if (Number == '0')
	{
		std::cout << "options with only two outputs use 1/0 instead, they are labeled respectivly" << std::endl << "so, if 'are you happy, yes or no' then it would by 1 for yes / 0 for no" << std::endl;
		std::cout << "1: find protons, neutrons, and electrons" << std::endl;
		std::cout << "2: find mass number" << std::endl;
		std::cout << "3: relitive and actual percentage" << std::endl;
		std::cout << "4: Carbon, hydrogen, oxygen, and nitrogen weight calculator" << std::endl;
		std::cout << "5: percentage of an atom" << std::endl;
		std::cout << "6: grams percentage calculator" << std::endl;
		std::cout << "7: grams to moles and vice versa" << std::endl;
		std::cout << "8: moles to moles" << std::endl;
		std::cout << std::endl << "press V for basic vocab" << std::endl;

		//end help
		std::cout << "press any number" << std::endl;
		std::cin >> Number;
	}

	//vocab
	if(Number == 'v')
	{
		std::cout << "AMU stands for atomic mass unit and is equal to 1.66054*10^-24 grams" << std::endl;
		std::cout << "one mole is 6.022*10^23 atoms" << std::endl;
		std::cout << "anion is negativly charged, cation are positivly charged" << std::endl;
		std::cout << "find the number of atoms in a mole, divide the atoms by one mole" << std::endl;

		std::cout << std::endl << "multi step mole equasions:" << std::endl;
		std::cout << "step 1: multiply the number of atoms by the type of atom that you want" << std::endl;
		std::cout << "step 2: divide the previous by one mole" << std::endl;
		std::cout << "step 3: AMU of atom * previous number = one gram" << std::endl;
		
		std::cout << "empirical formula is just the simplified version of the molecular formula, eg C6H2O4 would become C3HO2" << std::endl;

		std::cout << std::endl << "mole of input to moles of output" << std::endl;
		std::cout << "step 1: divide grams by the molar mass" << std::endl;
		std::cout << "step 2: " << std::endl;
		
		std::cout << std::endl << "one mole of gas at STP is 22.4 litirs" << std::endl;

		std::cin >> Number;
	}

	//protons, neutrons, and electrons
	if (Number == '1') 
	{
		std::cout << "FIND PROTONS, NEUTRONS, AND ELECTRONS" << std::endl << std::endl;
		std::cout << "Atomic Mass (number top left)" << std::endl <<  "*NOT AVERAGE MASS* " << std::endl;
		std::cin >> MN;
		std::cout << "Atomic number/protons (bottom left)" << std::endl;
		std::cin >> AN;
		std::cout << "Charge" << std::endl;
		std::cin >> Charge;

		//outputs

		//finds electrons
		if (Charge == 0) 
		{
			electron = AN;
		}
		else 
		{
			electron = AN - Charge;
		}

		neutron = MN - AN;
		std::cout << "There are " << neutron << " Neutrons" << std::endl;
		std::cout << "There are " << AN << " Protons" << std::endl;
		std::cout << "there are " << electron << " Electrons" << std::endl;
		std::cin >> ext;
	}

	//mass number
	if(Number == '2')
	{
		std::cout << "MASS NUMBER CALCULATOR" << std::endl << std::endl;
		std::cout << "neutrons" << std::endl;
		std::cin >> neutron;
		std::cout << "protons" << std::endl;
		std::cin >> proton;

		MN = proton + neutron;
		std::cout << "the mass number is " << MN << std::endl;
		std::cin >> ext;
	}

	//relitive intensity
	if (Number == '3') 
	{
		std::cout << "RELITIVE AND ACTUAL INTENSITY" << std::endl << std::endl;
		std::cout << "are you inputting actual or relitive percentage? 1/0 respectivly" << std::endl;
		std::cin >> AR;
		std::cout << std::endl;
		std::cout << "Weight of A" << std::endl;
		std::cin >> WA;
		std::cout << "input value of A" << std::endl;
		std::cin >> A;
		std::cout << "weight of B" << std::endl;
		std::cin >> WB;
		std::cout << "input value of B" << std::endl;
		std::cin >> B;
		std::cout << "weight of C" << std::endl;
		std::cin >> WC;
		std::cout << "input value of C" << std::endl;
		std::cin >> C;
		std::cout << "how many more terms are there?" << std::endl;
		std::cin >> YNRA;
		if(YNRA == 1)//there is a fourth term
		{
			std::cout << "weight of D" << std::endl;
			std::cin >> WD;
			std::cout << "input value of D" << std::endl;
			std::cin >> D;
			std::cout << std::endl << "would you like to change the precision? press 1 for yes or 0 for no (for experts only)" << std::endl;
			std::cin >> YN;
			POA = (A / (A + B + C + D)) * 100;
			POB = (B / (B + A + C + D)) * 100;
			POC = (C / (C + B + A + D)) * 100;
			POD = (D / (D + B + C + A)) * 100;
			total = POA + POB + POC + POD;
			PE = 100 - total;
			AAM = ((POA * WA) + (POB * WB) + (POC * WC)) / 100;

			if (YN == 1)
			{
				std::cout << "what do you want the precision to be? 2 is normal" << std::endl;
				std::cin >> HP;
			}
			if (AR == 1)
			{
				std::cout.precision(HP);
				std::cout << "the average atomic mass is " << AAM << "%" << std::endl;
			}
			if (AR == 0)
			{

				if (PE == 0)
				{
					std::cout.precision(HP);
					std::cout << "The percent of A is " << POA << "%" << std::endl;
					std::cout << "The percent of B is " << POB << "%" << std::endl;
					std::cout << "The percent of C is " << POC << "%" << std::endl;
					std::cout << "The percent of D is " << POD << "%" << std::endl;
					std::cout << std::endl << "The average atomic mass is " << AAM << std::endl;
					std::cin >> ext;
				}
				else
				{
					std::cout.precision(HP);
					std::cout << "The percent of A is " << POA << "%" << std::endl;
					std::cout << "The percent of B is " << POB << "%" << std::endl;
					std::cout << "The percent of C is " << POC << "%" << std::endl;
					std::cout << "The percent of D is " << POD << "%" << std::endl;
					std::cout << std::endl << "The average atomic mass is " << AAM << std::endl;
					std::cout << "though you are off in your numbers by " << PE << "%" << std::endl;
					std::cin >> ext;
				}
			}
		}
		if (YNRA == 2)//there is a fith term
		{
			std::cout << "weight of D" << std::endl;
			std::cin >> WD;
			std::cout << "input value of D" << std::endl;
			std::cin >> D;
			std::cout << "weight of E" << std::endl;
			std::cin >> WE;
			std::cout << "input value of E" << std::endl;
			std::cin >> E;
			std::cout << std::endl << "would you like to change the precision? press 1 for yes or 0 for no (for experts only)" << std::endl;
			std::cin >> YN;
			POA = (A / (A + B + C + D + E)) * 100;
			POB = (B / (B + A + C + D + E)) * 100;
			POC = (C / (C + B + A + D + E)) * 100;
			POD = (D / (D + B + C + A + E)) * 100;
			POE = (E / (A + B + C + D + E)) * 100;
			total = POA + POB + POC + POD + POE;
			PE = 100 - total;
			AAM = ((POA * WA) + (POB * WB) + (POC * WC) + (POD * WD) + (POE * WE)) / 100;

			if (YN == 1)
			{
				std::cout << "what do you want the precision to be? 2 is normal" << std::endl;
				std::cin >> HP;
			}
			if (AR == 1)
			{
				std::cout.precision(HP);
				std::cout << "the average atomic mass is " << AAM << "%" << std::endl;
			}
			if (AR == 0)
			{

				if (PE == 0)
				{
					std::cout.precision(HP);
					std::cout << "The percent of A is " << POA << "%" << std::endl;
					std::cout << "The percent of B is " << POB << "%" << std::endl;
					std::cout << "The percent of C is " << POC << "%" << std::endl;
					std::cout << "The percent of D is " << POD << "%" << std::endl;
					std::cout << "The Percent of E is " << POE << "%" << std::endl;
					std::cout << std::endl << "The average atomic mass is " << AAM << std::endl;
					std::cin >> ext;
					std::cout << ext;
				}
				else
				{
					std::cout.precision(HP);
					std::cout << "The percent of A is " << POA << "%" << std::endl;
					std::cout << "The percent of B is " << POB << "%" << std::endl;
					std::cout << "The percent of C is " << POC << "%" << std::endl;
					std::cout << "The percent of D is " << POD << "%" << std::endl;
					std::cout << "The Percent of E is " << POE << "%" << std::endl;
					std::cout << std::endl << "The average atomic mass is " << AAM << std::endl;
					std::cout << "though you are off in your numbers by " << PE << "%" << std::endl;
					std::cin >> ext;
					std::cout << ext;
				}
			}
		}
		if (YNRA == 0)
		{
			std::cout << std::endl << "would you like to change the precision? press 1 for yes or 0 for no (for experts only)" << std::endl;
			std::cin >> YN;
			POA = (A / (A + B + C)) * 100;
			POB = (B / (B + A + C)) * 100;
			POC = (C / (C + B + A)) * 100;
			total = POA + POB + POC;
			PE = 100 - total;
			AAM = ((POA * WA) + (POB * WB) + (POC * WC)) / 100;
			if (YN == 1)
			{
				std::cout << "what do you want the precision to be? 2 is normal" << std::endl;
				std::cin >> HP;
			}
			if (AR == 1)
			{
				std::cout.precision(HP);
				std::cout << "the average atomic mass is " << AAM << "%" << std::endl;
			}
			if (AR == 0)
			{

				if (PE == 0)
				{
					std::cout.precision(HP);
					std::cout << "The percent of A is " << POA << "%" << std::endl;
					std::cout << "The percent of B is " << POB << "%" << std::endl;
					std::cout << "The percent of C is " << POC << "%" << std::endl;
					std::cout << std::endl << "The average atomic mass is " << AAM << std::endl;
					std::cin >> ext;
					std::cout << ext;
				}
				else
				{
					std::cout.precision(HP);
					std::cout << "The percent of A is " << POA << "%" << std::endl;
					std::cout << "The percent of B is " << POB << "%" << std::endl;
					std::cout << "The percent of C is " << POC << "%" << std::endl;
					std::cout << std::endl << "The average atomic mass is " << AAM << std::endl;
					std::cout << "though you are off in your numbers by " << PE << "%" << std::endl;
					std::cin >> ext;
					std::cout << ext;
				}

			}
		}
		else
		{
			return(0);
		}
		std::cin >> ext;
	}

	//CHNO g/mol calculator
	if(Number == '4')
	{
		std::cout << "CARBON, HYDROGEN, NITROGEN, AND OXYGEN CALCULATOR" << std::endl << std::endl;
		std::cout << "how many carbon atoms?" << std::endl;
		std::cin >> CarbonNumber;
		std::cout << "how many Hydrogen atoms?" << std::endl;
		std::cin >> HydrogenNumber;
		std::cout << "how many oxygen atoms do you have?" << std::endl;
		std::cin >> OxygenNumber;
		std::cout << "how many nitrogen atoms?" << std::endl;
		std::cin >> NitrogenNumber;
		std::cout << "how many sulphor atoms?" << std::endl;
		std::cin >> sulphorNumber;
		std::cout << "how many moles of the total?" << std::endl;
		std::cin >> HMM;

		CarbonNumber = CarbonNumber * CarbonAMU;
		HydrogenNumber = HydrogenNumber * HydrogenAMU;
		NitrogenNumber = NitrogenNumber * NitrogenAMU;
		OxygenNumber = OxygenNumber * OxygenAMU;
		sulphorNumber = sulphorNumber * sulphorAMU;
		CHNOTotal = (CarbonNumber + HydrogenNumber + OxygenNumber + NitrogenNumber + sulphorNumber) * HMM;
		std::cout << "the total weight is " << CHNOTotal << "g/mol" << std::endl;
		std::cin >> ext;
		std::cout << ext;
	}

	//molecule percentage
	if(Number == '5')
	{
		std::cout << "PERCENTAGE OF A MOLECULE" << std::endl << std::endl;
		std::cout << "Input amount of carbons" << std::endl;
		std::cin >> CarbonNumber;
		std::cout << "Input amount of hydrogen" << std::endl;
		std::cin >> HydrogenNumber;
		std::cout << "Input amount of oxygens" << std::endl;
		std::cin >> OxygenNumber;
		std::cout << "Input amount of nitrogens" << std::endl;
		std::cin >> NitrogenNumber;
		std::cout << "Input amount of sulphor" << std::endl;
		std::cin >> sulphorNumber;
		std::cout << "do you have any more? y/n" << std::endl;
		std::cin >> HAM;
		if(HAM == 'y')
		{
			std::cout << "what is the atomic weight of the atom" << std::endl;
			std::cin >> otherAMU;
			std::cout << "how many of that atom do you have?" << std::endl;
			std::cin >> otherNumber;
		}
		CarbonNumber = CarbonNumber * CarbonAMU;
		HydrogenNumber = HydrogenNumber * HydrogenAMU;
		NitrogenNumber = NitrogenNumber * NitrogenAMU;
		OxygenNumber = OxygenNumber * OxygenAMU;
		sulphorNumber = sulphorNumber * sulphorAMU;
		otherNumber = otherNumber * otherAMU;
		std::cout << "are you solving for C, H, N, O, S, or other(press 0)" << std::endl;
		std::cin >> CHNOSO;
		if(CHNOSO == 'c')
		{
			CHNOP = (CarbonNumber / (CarbonNumber + HydrogenNumber + OxygenNumber + NitrogenNumber + sulphorNumber + otherNumber)) * 100;
			std::cout << "carbon accounts for " << CHNOP << "% of the total" << std::endl;
			std::cin >> ext;
		}
		else if (CHNOSO == 'h')
		{
			CHNOP = (HydrogenNumber / (CarbonNumber + HydrogenNumber + OxygenNumber + NitrogenNumber + sulphorNumber + otherNumber)) * 100;
			std::cout << "hydrogen accounts for " << CHNOP << "% of the total" << std::endl;
			std::cin >> ext;
		}
		else if (CHNOSO == 'o')
		{
			CHNOP = (OxygenNumber / (CarbonNumber + HydrogenNumber + OxygenNumber + NitrogenNumber + sulphorNumber + otherNumber)) * 100;
			std::cout << "oxygen accounts for " << CHNOP << "% of the total" << std::endl;
			std::cin >> ext;
		}
		else if (CHNOSO == 'n')
		{
			CHNOP = (NitrogenNumber / (CarbonNumber + HydrogenNumber + OxygenNumber + NitrogenNumber + sulphorNumber + otherNumber)) * 100;
			std::cout << "nitrogen accounts for " << CHNOP << "% of the total" << std::endl;
			std::cin >> ext;
		}
		else if (CHNOSO == 's')
		{
			CHNOP = (sulphorNumber / (CarbonNumber + HydrogenNumber + OxygenNumber + NitrogenNumber + sulphorNumber + otherNumber)) * 100;
			std::cout << "sulphor accounts for " << CHNOP << "% of the total" << std::endl;
			std::cin >> ext;
		}
		else if (CHNOSO == '0')
		{
			CHNOP = (otherNumber / (CarbonNumber + HydrogenNumber + OxygenNumber + NitrogenNumber + sulphorNumber + otherNumber)) * 100;
			std::cout << "your atom accounts for " << CHNOP << "% of the total" << std::endl;
			std::cin >> ext;
			std::cout << ext;
		}
	}

	//grams percentage
	if(Number == '6')
	{
		std::cout << "GRAMS PERCENTAGE CALCULATOR" << std::endl << std::endl;
		std::cout << "input carbon grams" << std::endl;
		std::cin >> CWg;
		std::cout << "input hydrogen grams" << std::endl;
		std::cin >> HWg;
		std::cout << "input oxygen grams" << std::endl;
		std::cin >> OWg;
		std::cout << "input nitrogen grams" << std::endl;
		std::cin >> NWg;
		std::cout << "input sulfur grams" << std::endl;
		std::cin >> SWg;
		std::cout << "input any other singular weight" << std::endl;
		std::cin >> OTWg;
		std::cout << "are you solving for C, H, N, O, S, or other(press 0)" << std::endl;
		std::cin >> WgC;
		if(WgC == 'c')
		{
			CWg = (CWg / (CWg + HWg + OWg + NWg + OTWg)) * 100;
			std::cout << "Carbon is " << CWg << "% of the total" << std::endl;
		}
		else if (WgC == 'h')
		{
			HWg = (HWg / (CWg + HWg + OWg + NWg + OTWg)) * 100;
			std::cout << "Hydrogen is " << HWg << "% of the total" << std::endl;
		}
		else if (WgC == 'n')
		{
			NWg = (NWg / (CWg + HWg + OWg + NWg + OTWg)) * 100;
			std::cout << "Nitrogen is " << NWg << "% of the total" << std::endl;
		}
		else if (WgC == 'o')
		{
			OWg = (OWg / (CWg + HWg + OWg + NWg + OTWg)) * 100;
			std::cout << "Oxegen is " << OWg << "% of the total" << std::endl;
		}
		else if (WgC == 's')
		{
			SWg = (SWg / (CWg + HWg + OWg + NWg + OTWg)) * 100;
			std::cout << "Sulfur is " << SWg << "% of the total" << std::endl;
		}
		else if (WgC == '0')
		{
			OTWg = (OTWg / (CWg + HWg + OWg + NWg + OTWg)) * 100;
			std::cout << "your atom is " << OTWg << "% of the total" << std::endl;
		}
		std::cin >> ext;
	}

	//grams to moles and vice versa
	if (Number == '7') 
	{
		std::cout << "GRAMS TO MOLES AND VICE VERSA" << std::endl;

		std::cout << "are you finding moles or grams" << std::endl;
		std::cin >> MOG;
		std::cout << "ignore prefixes like '2'h2o" << std::endl << std::endl;

		//finding moles
		if (MOG == 'm') 
		{
			std::cout << "how many grams do you have" << std::endl;
			std::cin >> HMG;
			std::cout << "Input amount of hydrogens atoms" << std::endl;
			std::cin >> hyA;
			std::cout << "Input amount of carbons atoms" << std::endl;
			std::cin >> caA;
			std::cout << "Input amount of oxygens atoms" << std::endl;
			std::cin >> oxA;
			std::cout << "Input amount of nitrogens atoms" << std::endl;
			std::cin >> niA;
			std::cout << "Input amount of sulphor atoms" << std::endl;
			std::cin >> suA;
			std::cout << "input amount of another atom" << std::endl;
			std::cin >> otA;
			std::cout << "input atomic weight of the other atoms" << std::endl;
			std::cin >> otW;
			Gtotal = 0;
			Gtotal = HMG / ((hyA * HydrogenAMU) + (caA * CarbonAMU) + (oxA * OxygenAMU) + (niA * NitrogenAMU) + (suA * sulphorAMU) + (otA * otW));

			std::cout << "You have " << Gtotal << " moles" << std::endl;

			std::cin >> Number;
		}
		//finding grams
		if (MOG == 'g')
		{
			std::cout << "how many moles?" << std::endl;
			std::cin >> HMM;
			std::cout << "Input amount of hydrogens atoms" << std::endl;
			std::cin >> hyA;
			std::cout << "Input amount of carbons atoms" << std::endl;
			std::cin >> caA;
			std::cout << "Input amount of oxygens atoms" << std::endl;
			std::cin >> oxA;
			std::cout << "Input amount of nitrogens atoms" << std::endl;
			std::cin >> niA;
			std::cout << "Input amount of sulphor atoms" << std::endl;
			std::cin >> suA;
			std::cout << "input other atom weight atoms" << std::endl;
			std::cin >> otA;
			std::cout << "input atomic weight of the other atoms" << std::endl;
			std::cin >> otW;

			Gtotal = (hyA * HydrogenAMU * HMM) + (caA * CarbonAMU * HMM) + (oxA * OxygenAMU * HMM) + (niA * NitrogenAMU * HMM) + (suA * sulphorAMU * HMM) + (otA * otW * HMM);

			std::cout << "you have " << Gtotal << " Grams" << std::endl;

			std::cin >> Number;
		}
	}
	//atom
	if (Number == 8) 
	{

		std::cout << "How many grams do you have" << std::endl;
		std::cin >> HMG;
		std::cout << "Input amount of hydrogens atoms" << std::endl;
		std::cin >> hg;
		std::cout << "Input amount of carbons atoms" << std::endl;
		std::cin >> cg;
		std::cout << "Input amount of oxygens atoms" << std::endl;
		std::cin >> og;
		std::cout << "Input amount of nitrogens atoms" << std::endl;
		std::cin >> ng;
		std::cout << "Input amount of sulphor atoms" << std::endl;
		std::cin >> sg;
		std::cout << "input other atom weight atoms" << std::endl;
		std::cin >> otA;
		std::cout << "input atomic weight of the other atoms" << std::endl;
		std::cin >> otW;


		Gtotal = HMG / ((hg * HydrogenAMU) + (cg * CarbonAMU) + (og * OxygenAMU) + (ng * NitrogenAMU) + (sg * sulphorAMU) + (otA * otW));

		std::cout << "you have " << Gtotal << " moles\n" << std::endl;

		std::cout << "what is the conversion from the input compound to the output compound" << std::endl;
		std::cin >> ito;

		//makes sure I dont make any mi-snakes
		hg = 0; cg = 0; og = 0; ng = 0; sg = 0; otA = 0; otW = 0;
		//weight of teh output compound
		std::cout << "input the atoms for the output compound" << std::endl << std::endl;
		std::cout << "Input amount of hydrogens atoms" << std::endl;
		std::cin >> hg;
		std::cout << "Input amount of carbons atoms" << std::endl;
		std::cin >> cg;
		std::cout << "Input amount of oxygens atoms" << std::endl;
		std::cin >> og;
		std::cout << "Input amount of nitrogens atoms" << std::endl;
		std::cin >> ng;
		std::cout << "Input amount of sulphor atoms" << std::endl;
		std::cin >> sg;
		std::cout << "input the amount of atoms of a different atom" << std::endl;
		std::cin >> otA;
		std::cout << "input atomic weight of the other atoms" << std::endl;
		std::cin >> otW;

		POTATO_SNURGLEMUMPHKIN = (hg * HydrogenAMU) + (cg * CarbonAMU) + (og * OxygenAMU) + (ng * NitrogenAMU) + (sg * sulphorAMU) + (otA * otW);
		GTOTAL1 = POTATO_SNURGLEMUMPHKIN * Gtotal * ito;

		std::cout << "you get " << GTOTAL1 << " grams" << std::endl;

		std::cin >> Number;
	}
	
	//if they input something bad
	else
	{
		return(0);
	}
}
