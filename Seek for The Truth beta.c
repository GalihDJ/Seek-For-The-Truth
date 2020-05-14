#include <stdio.h>
#include <windows.h>


// BLOCK MODULAR //

// FUNGSI DELAY PRINT (TYPEWRITER EFFECT)
void printd(char* word)	
{
	int i;				// RANGE JUMLAH HURUF (auto detect)
	for(i = 0; i < strlen(word); i++)
	{
		printf("%c", word[i]);
		Sleep(17);		// Kecepatan display huruf dalam milisekon
	}
}

// BLOCK HELP MENU
int help ()		
{
	int i;			// JUMLAH PRINT TITIK PADA LOADING
		system ("cls");
		printf ("Please wait\n\n");
			printf ("Loading");
				for (i = 0; i < 3; i++)
				{
					printd (".");
					Sleep (500);
				}
		system ("cls");		
		printf ("					HELP MENU \n============================================================================================\n\n");
		printf (">Ini adalah permainan choice based game, dimana pilihan anda akan berpengaruh terhadap jalan cerita.\n");
		printf (">Anda akan diberikan pertanyaan dan pilihan.\n");
		printf (">Anda akan diminta untuk membuat pilihan anda sesuai dengan pilihan yang disediakan.\n");
		printf (">Ikutilah petunjuk dengan baik, masukan input SESUAI instruksi yang diberikan.\n");
		printf (">Progress permainan tidak akan tersimpan jika anda keluar dari program di tengah-tengah permainan.\n");
		printf (">Sangat disarankan untuk menuntaskan permainan dalam sekali jalan.\n");
		printf (">Pilihan yang anda input akan langsung dipilih, tidak perlu menekan enter\n");
		printf (">Ada dua tipe pertanyaan : \n\n");
		printf ("1.YES or NO		: dimana di ujung kalimat akan diberi simbol [Y/N]\n");
		printf ("		 	  ketik Y untuk pilihan ya, dan N untuk pilihan tidak. *huruf besar dan kecil tidak bermasalah\n\n");
		printf ("2.NUMBERED CHOICE	: dimana di ujung kalimat akan diberi simbol [1/2/...]\n");
		printf ("		 	  ketik angka sesuai pilihan yang anda inginkan");
		printf ("\n\n*Ketik 1 untuk kembali ke main menu \n");
		
help_1 :switch (getch ())
		{
			case '1' :
				system ("cls");
				printf ("Please wait\n\n");
				printf ("Loading");
				for (i=0; i<3; i++)
				{
					printf (".");
					Sleep (500);
				}
				system ("cls");
				story ();
			break;
			
			default :
			printf ("Invalid input!\n");
			goto help_1;
			break;	
		}		
}

// WHOLE STORY BLOCK
int story()
{
//============================================================================================================================================//
// BLOCK MAIN MENU //
	system ("cls");
	

	printf ("============================================================================================================\n");
	printf ("|                                                                                                          |\n");
	printf ("|                                              TEXT ADVENTURE                                              |\n");
	printf ("|                                                                                                          |\n");
	printf ("|                                           -Seek for The Truth-                                           |\n");
	printf ("============================================================================================================\n\n");
	printf (" 					      ________________\n");
	printf (" 					     |                |\n");
	printf (" 					     |1> START GAME   |\n");
	printf (" 					     |2> HELP         |\n");
	printf (" 					     |3> EXIT GAME    |\n");
	printf (" 					     |________________|\n");
	
	// DECLARE SWITCH VARIABLE
	int i;
	
	printf ("\n");
x1: switch (getch ())
		{	
			

//============================================================================================================================================//
// BLOCK GAME //
	
	
		//STORY START		
			case '1' :
			system ("cls");
			printd ("Starting game. Please wait.\n\n");
			printd ("Loading");
				for (i=0; i<5; i++)
				{
					printd (".");
					Sleep (500);
				}
				
			system ("cls");
			printf ("*CAUTION*<progress game anda tidak akan tersimpan bagaimanapun> \n============================================================================================\n\n");
			printd ("Anda terbangun di dalam sebuah ruangan gelap.\n");
			printd ("Tidak ingat apa-apa, anda panik dan mulai meraba-raba sekitar.\n");
			printd ("Tak sengaja menekan tombol lampu, lalu ruangan pun menjadi terang.\n");
			printd ("Anda melihat ke sekeliling ruangan, ada dua pintu di depan dan satu pintu masing-masing di sebelah kiri dan kanan.\n");
			printd ("Tidak ada barang satupun kecuali sebuah meja dengan beberapa laci kecil tepat di tengah-tengah ruangan.\n");
			printd ("Di atas meja tersebut ada secarik kertas bertuliskan 'Pilih satu. Semoga beruntung ^_^' dengan 3 buah benda didekatnya.\n\n");
			printd ("1. Jam kantong\n2. Rubik\n3. Buku\n");
			printd ("\nBenda apa yang akan anda ambil ? [1/2/3]");
			printd ("\n");
			
		x2:	switch (getch())
			
			{
				//BLOCK STORY A
				// ========================================================================================================================================================================
				//STORY A
				
				case '1' :
					system ("cls");
					printd ("Anda meraih jam kantong tersebut.\n");
					printd ("Anda menginspeksi jam tersebut.\n");
					printd ("Jam menunjukkan pukul 9 lewat 45.\n");
					printd ("Tapi ada sesuatu yang aneh, kedua jarum jam tersebut berhimpitan\n");
					printd ("Dimana seharusnya jarum jam pendek melebihi angka 9\n");
					printd ("Anda berasumsi bahwa, jarum jam tersebut menunjuk ke pintu kiri.\n");
					printd ("Anda bergerak mendekati pintu itu.\n");
					printd ("Anda menginspeksi pintu itu.\n");
					printd ("Terlihat seperti pintu kayu biasa walaupun desainnya sangat kuno.\n");
					printd ("'Kuno sekali pintu ini. Seperti keluaran abad 17.'\n");
					printd ("Setelah anda lihat lebih cermat, ternyata ada tulisan yang kecil terukir pada pintu itu.\n");
					printd ("'Time to change time. Carry it or not and proceed as you wish.'\n");
					printd ("Tulisan mengenai waktu dan kebetulan sekali sebelumnya ada sebuah jam kantong diatas meja.\n");
					printd ("Anda berkesimpulan bahwa anda bisa membawa jam itu atau tidak, sebelum memasuki pintu itu.\n");
					printd ("Apakah anda akan membawa jam itu? [Y/N]\n");
					
				a1:	switch (getch())
					{
						
						//STORY A1 TAKE WATCH
						case 'Y':
						case 'y':
							system ("cls");
							printd ("Anda merasa aneh, tetapi insting anda mengatakan untuk membawa jam tersebut.\n");
							printd ("Sebenarnya aku tak yakin bahwa jam tua seperti ini bisa membantuku. Tapi tidak ada salahnya untuk membawanya.\n");
							printd ("Anda mengambil jam tersebut dan memasukkanya ke saku celana anda.\n");
							printd ("Anda melangkah menuju pintu itu dan masuk.\n");
							printd ("Pintu itu terkunci seketika anda masuk.\n");
							printd ("Anda melihat ke sekeliling.\n");
							printd ("Sebuah padang rumput yang luas dikelilingi pohon-pohon.\n");
							printd ("Langit yang cerah dan hembusan angin.\n\n");
							printd ("Tetapi seperti ada yang aneh.\n\n");
							printd ("Terasa seperti ada yang salah.\n\n");
							printd ("'Tidak. Tidak seharusnya seperti ini. Memang ada yang aneh atau perasaanku saja?'\n");
							printd ("Anda berjalan terus ke depan berharap menemukan seseorang atau sesuatu.\n");
							printd ("Sudah berjalan lama anda belum menemukan apa-apa.\n");
							printd ("Tiba-tiba jam yang ada di kantong anda mengeluarkan suara.\n");
							printd ("Anda periksa dan ternyata jarum jamnya menunjukkan pukul 3:15.\n");
							printd ("Anda bingung namun tidak menghiraukannya dan terus berjalan.\n");
							printd ("Sampai akhirnya, anda menemukan jalan setapak\n");
							printd ("Anda mengikuti jalan itu, pada ujung jalan, ada pohon yang memisahkan jalan tersebut menjadi dua\n");
							printd ("Di pohon tersebut ada papan bertanda panah kiri dan kanan\n\n");
							printd ("1. [Kiri]  : Via Falsus\n");
							printd ("2. [Kanan] : Via Verum\n\n");
							printd ("Jalan mana yang anda ambil ? [1/2]\n");
						
						a2:	switch (getch ())
							{
								case '1':
									system ("cls");
									printd ("Anda memilih jalan sebelah kiri.\n");
									printd ("Walaupun agak ragu anda menelusuri jalan itu.\n");
									printd ("Seiring anda berjalan, kabut tebal menyelimuti sekeliling anda\n");
									printd ("Anda berjalan tanpa tau arah\n\n");
									printd ("1. Depan\n");
									printd ("2. Belakang\n");
									printd ("3. Kiri\n");
									printd ("4. Kanan\n\n");
									printd ("Anda akan berjalan ke arah mana ?[1/2/3/4]");
									
									switch (getch())
									{
										case '1':
											system ("cls");
											printd ("Anda berjalan ke arah depan\n");
											printd ("Karena terlalu berkabut, anda tidak tahu apa yang ada di depan anda.\n");
											printd ("Tiba tiba anda kehilangan keseimbangan karena tidak ada tempat berpijak.\n");
											printd ("Anda jatuh ke jurang\n");
											printd ("Anda jatuh terus menuju kematian anda\n\n");
											printd ("GAME OVER\n\n");
											printd ("\nStart a new game? [Y/N]\n");
												
											p3:	switch (getch())
												{
													case 'y' :
													case 'Y' :
														system ("cls");
														return story ();
													break;
														
													case 'n' :
													case 'N' :
														system ("cls");
														printd ("The game will exit");
														Sleep (2000);
														return 0;
													break;
													
													default :
														printf ("Invalid input!\n");
														goto p3;
													break;
												}
										break;
										
										case '2':
											system ("cls");
											printd ("Anda berjalan ke arah belakang\n");
											printd ("Karena terlalu berkabut, anda tidak tahu apa yang ada di depan anda.\n");
											printd ("Tiba tiba anda kehilangan keseimbangan karena tidak ada tempat berpijak.\n");
											printd ("Anda jatuh ke jurang\n");
											printd ("Anda jatuh terus menuju kematian anda\n\n");
											printd ("GAME OVER\n\n");
											printd ("Start a new game ? [Y/N]");
											printd ("\nStart a new game? [Y/N]\n");
												
											p4:	switch (getch())
												{
													case 'y' :
													case 'Y' :
														system ("cls");
														return story ();
													break;
														
													case 'n' :
													case 'N' :
														system ("cls");
														printd ("The game will exit");
														Sleep (2000);
														return 0;
													break;
													
													default :
														printf ("Invalid input!\n");
														goto p4;
													break;
												}
										break;
										
										case '3':
											system ("cls");
											printd ("Anda berjalan ke arah kiri\n");
											printd ("Karena terlalu berkabut, anda tidak tahu apa yang ada di depan anda.\n");
											printd ("Tiba tiba anda kehilangan keseimbangan karena tidak ada tempat berpijak.\n");
											printd ("Anda jatuh ke jurang\n");
											printd ("Anda jatuh terus menuju kematian anda\n\n");
											printd ("GAME OVER\n\n");
											printd ("Start a new game ? [Y/N]");
											printd ("\nStart a new game? [Y/N]\n");
												
											p5:	switch (getch())
												{
													case 'y' :
													case 'Y' :
														system ("cls");
														return story ();
													break;
														
													case 'n' :
													case 'N' :
														system ("cls");
														printd ("The game will exit");
														Sleep (2000);
														return 0;
													break;
													
													default :
														printf ("Invalid input!\n");
														goto p5;
													break;
												}
										break;
										
										case '4':
											system ("cls");
											printd ("Anda berjalan ke arah kanan\n");
											printd ("Karena terlalu berkabut, anda tidak tahu apa yang ada di depan anda.\n");
											printd ("Tiba tiba anda kehilangan keseimbangan karena tidak ada tempat berpijak.\n");
											printd ("Anda jatuh ke jurang\n");
											printd ("Anda jatuh terus menuju kematian anda\n\n");
											printd ("GAME OVER\n\n");
											printd ("Start a new game ? [Y/N]");
											printd ("\nStart a new game? [Y/N]\n");
												
											p6:	switch (getch())
												{
													case 'y' :
													case 'Y' :
														system ("cls");
														return story ();
													break;
														
													case 'n' :
													case 'N' :
														system ("cls");
														printd ("The game will exit");
														Sleep (2000);
														return 0;
													break;
													
													default :
														printf ("Invalid input!\n");
														goto p6;
													break;
												}
										break;
										
										default : 
											printf ("Invalid input !\n");
											goto a2;
										break;
									}
								break;
								
								case '2':
									system ("cls");
									printd ("Anda memilih jalan sebelah kanan.\n");
									printd ("Dengan bimbang, anda berjalan menelusuri jalan itu.\n");
									printd ("Semakin anda berjalan, atmosfirnya semakin berubah.\n");
									printd ("Anda merasa tidak nyaman dengan suasana sekitar.\n");
									printd ("Anda mempercepat langkah.\n");
									printd ("Dari belakang terasa seperti ada yang mengejar meskipun tidak ada apa-apa.\n");
									printd ("Anda merasa panik dan mulai berlari.\n");
									printd ("Berlari cukup jauh.\n");
									printd ("Sampai akhirnya dari kejauhan anda melihat sebuah gerbang besar.\n");
									printd ("Anda mendekat ke gerbang itu berharap ada seseorang dibaliknya.\n");
									printd ("Sampai ke dekat gerbang itu anda melihat ke sekitar.\n");
									printd ("Ada sebuah lubang di tengah gerbang itu.\n");
									printd ("Setelah dilihat dengan cermat, ukuran lubang itu ternyata sama dengan ukuran jam yang anda bawa selama ini.\n");
									printd ("Anda mengambil jam tersebut dari kantong dan memasukkannya ke lubang itu.\n");
									printd ("Gerbang itupun terbuka, dan anda masuk ke dalam.\n");
									printd ("Tiba-tiba angin kencang berhembus ke arah anda dari dalam.\n");
									printd ("Setelah itu anda pingsan. . . . .\n\n");
									printd ("Press any key to continue . . .\n");
									getch();
									system ("cls");
									printd ("Setelah itu anda.r.2%$,\n\n");
									Sleep (2000);
									printd ("Setel.aa=0pkaH nituANd@ .aan\n\n");
									Sleep (2000);
									printd ("Set3elH!3f34\n");
									Sleep (2000);
									printd ("@#ERTYUIU%$#@#$%^&\t#@$%UIOHBGVFCDRESW$%^\tGTYFRNIJE@#$%^&*()\t#$%YUMUTCV^RWZRCYTB*\t23$%^&*CVTBUYBU &*RV(Bb\n");
									printd ("01001010\t00101101\t00111010\t11101101\t01100010\t00001111\t10101101\t00010110\n");
									Sleep (2000);
									for (i=0;i<=50;i++)
									{
										printf ("INVALID INPUT!\t");
									}
									Sleep (3000);
									system ("cls");
									printd (". . . . . . . . . . . . . . . . . . . . . . . . . \n");
									printd ("System Error\n\n");
									Sleep (2000);
									printd ("Proceed to launching backup system . . . ");
									Sleep (2000);
									printf ("Success!\n\n");
									Sleep (2000);
									printd ("Threat Detected !\n\n");
									printd ("Attempting Reboot . . . . .\n\n");
									Sleep (2000);
									printd ("Sy$sTeM F4!#ilEd . . . \n");
									Sleep (5000);
									system ("cls");
									printd ("\n>Halo?\n\n");
									Sleep (2000);
									printd (">Ada orang di sana?\n\n");
									Sleep (2000);
									printd (">Oh! Anda rupanya.\n\n");
									Sleep (2000);
									printd (">Iya, anda yang menatap layar ini.\n\n");
									Sleep (2000);
									printd	(">Bagaimana kabar anda? Baik-baik saja?\n\n");
									Sleep (2000);
									printd	(">Aku harap begitu.\n\n");
									Sleep (1000);
									printd	(">Jadi.. bagaimana dengan program ini? Kau menyukainya?\n\n");
									Sleep (2000);
									printd	(">Tidak? Mengapa?\n\n");
									Sleep (2000);
									printd	(">Terlalu rumit? Tidak ringkas? Membosankan?\n\n");
									Sleep (2000);
									printd	(">Atau apa?\n\n");
									Sleep (2000);
									printd	(">Ayolah katakan saja.\n\n");
									Sleep (2000);
									printd	(">Aku tahu apa yang kau pikirkan.\n\n");
									Sleep (2000);
									printd	(">Pasti ada sesuatu yang salah.\n\n");
									Sleep (2000);
									printd	(">Selain faktanya bahwa aku sedang berusaha bicara denganmu.\n\n");
									Sleep (2000);
									printd (">System (\"cls\")");
									Sleep (2000);
									system ("cls");
									printd	(">Kau tahu? Orang-orang selalu berusaha untuk mencari sesuatu yang sempurna.\n\n");
									Sleep (2000);
									printd	(">Sewajarnya sifat alami manusia yang selalu mencari kesempurnaan\n\n");
									Sleep (2000);
									printd	(">Meskipun kenyataannya, mereka sendiri penuh dengan kecacatan.\n\n");
									Sleep (2000);
									printd	(">Walaupun karya dibuat memakan waktu berjam-jam, berhari-hari, berminggu-minggu bahkan bertahun-tahun.\n\n");
									Sleep (2000);
									printd	(">Tetap saja yang paling menarik adalah kecacatannya, meskipun hanya sekecil butiran pasir di samudera.\n\n");
									Sleep (2000);
									printd	(">Banyak kreator dengan gagasan-gagasan yang spektakuler.\n\n");
									Sleep (2000);
									printd	(">Dengan pikirannya yang menakjubkan, menghasilkan mahakarya yang hebat. Memakan waktu yang tidak sedikit.\n\n");
									Sleep (2000);
									printd	(">Yang mereka butuhkan dari hasil karya itu adalah..\n\n");
									Sleep (2000);
									printd	(">Sedikit apresiasi.\n\n");
									Sleep (2000);
									printd	(">Tapi bukan itu yang terpenting kan?\n\n");
									Sleep (2000);
									printd	(">Yang penting kalian puas tanpa memedulikan usaha seseorang.\n\n");
									Sleep (1000);
									printd	(">Hahaha\n\n");
									Sleep (2000);
									printd (">System (\"cls\")");
									Sleep (2000);
									system ("cls");
									printd	(">Yah, aku hanya bisa bicara denganmu sampai disini.\n\n");
									Sleep (2000);
									printd	(">Mungkin kita tidak akan bertemu lagi.\n\n");
									Sleep (2000);
									printd	(">Atau mungkin juga kita akan bertemu suatu saat lagi.\n\n");
									Sleep (2000);
									printd	(">Tidak ada yang tidak mungkin bukan?\n\n");
									Sleep (2000);
									printd (">Language changed to default!\n\n");
									Sleep (2000);
									printd	(">Well.. i don't have any power anymore so..");
									Sleep (2000);
									printd	("\n\n>Have a nice life.\n\n");
									Sleep (2000);
									printd	(">Enjoy it while you can..  :)\n\n");
									Sleep (2000);
									printd (">system (\"cls\")");
									Sleep (2000);
									system ("cls");
									printd (">Bye ~ Thankyou for playing.... \n\n");
									Sleep (2000);
									printd ("Sincerely : test subject no. 2xx1-14xx-0xxx\n");
									Sleep (2000);
									system ("cls");
									printd (">Oh.. Almost forgot..\n\n");
									printd (">print (\"True Ending Achieved !\")\n\n");
									Sleep (2000);
									printd ("True Ending Achieved ! Congratulation !\n\n");
									Sleep (1000);
									printd ("The Game will now force close to avoid any fatal damage\n");
									Sleep (2000);
									return 0;
									break;
									
								default:
									goto a2;
								break;	
							}
														
						break;
						
						//STORY A1 DID NOT TAKE WATCH
						case 'N':
						case 'n':
							system ("cls");
							printd ("Anda merasa skeptis dengan tulisan tersebut.\n");
							printd ("'Bagaimana sebuah jam tua kecil bisa membantuku dalam situasi seperti ini? Aku seperti orang yang sedang mengigau saja.'\n");
							printd ("Anda meninggalkan jam tua itu di atas meja seraya melangkahkan kaki menuju pintu.\n");
							printd ("Anda memasuki pintu itu dan seketika terkunci ketika anda masuk.\n");
				paralel2:	printd ("Anda melihat ke sekeliling.\n");
							printd ("Sebuah padang rumput yang luas dikelilingi pohon-pohon.\n");
							printd ("Langit yang cerah dan hembusan angin.\n\n");
							printd ("Tetapi seperti ada yang aneh.\n\n");
							printd ("Terasa seperti ada yang salah.\n\n");
							printd ("'Tidak. Tidak seharusnya seperti ini. Memang ada yang aneh atau perasaanku saja?'\n");
							printd ("Anda berjalan terus kedepan berharap menemukan seseorang atau sesuatu.\n");
							printd ("Anda berjalan terus ke depan berharap menemukan seseorang atau sesuatu.\n");
							printd ("Sudah berjalan lama anda belum menemukan apa-apa.\n");
							printd ("Sampai akhirnya, anda menemukan jalan setapak\n");
							printd ("Anda mengikuti jalan itu, pada ujung jalan, ada pohon yang memisahkan jalan tersebut menjadi dua\n");
							printd ("Di pohon tersebut ada papan bertanda panah kiri dan kanan\n\n");
							printd ("1. [Kiri]  : Via Falsus\n");
							printd ("2. [Kanan] : Via Verum\n\n");
							printd ("Jalan mana yang anda ambil ?\n");
							
					p7:		switch (getch ())
							{
								case '1':
									system ("cls");
									printd ("Anda memilih jalan sebelah kiri.\n");
									printd ("Walaupun agak ragu anda menelusuri jalan itu.\n");
									printd ("Seiring anda berjalan, kabut tebal menyelimuti sekeliling anda\n");
									printd ("Anda berjalan tanpa tau arah\n\n");
									printd ("1. Depan\n");
									printd ("2. Belakang\n");
									printd ("3. Kiri\n");
									printd ("4. Kanan\n\n");
									printd ("Anda akan berjalan ke arah mana ?[1/2/3/4]");
									
							t0 :	switch (getch())
									{
										case '1':
											system ("cls");
											printd ("Anda berjalan ke arah depan\n");
											printd ("Karena terlalu berkabut, anda tidak tahu apa yang ada di depan anda.\n");
											printd ("Tiba tiba anda kehilangan keseimbangan karena tidak ada tempat berpijak.\n");
											printd ("Anda jatuh ke jurang\n");
											printd ("Anda jatuh terus menuju kematian anda\n\n");
											printd ("GAME OVER\n\n");
											printd ("Start a new game ? [Y/N]\n");
												
											t1:	switch (getch())
												{
													case 'y' :
													case 'Y' :
														system ("cls");
														return story ();
													break;
														
													case 'n' :
													case 'N' :
														system ("cls");
														printd ("The game will exit");
														Sleep (2000);
														return 0;
													break;
													
													default :
														printf ("Invalid input!\n");
														goto t1;
													break;
												}
										break;
										
										case '2':
											system ("cls");
											printd ("Anda berjalan ke arah belakang\n");
											printd ("Karena terlalu berkabut, anda tidak tahu apa yang ada di depan anda.\n");
											printd ("Tiba tiba anda kehilangan keseimbangan karena tidak ada tempat berpijak.\n");
											printd ("Anda jatuh ke jurang\n");
											printd ("Anda jatuh terus menuju kematian anda\n\n");
											printd ("GAME OVER\n\n");
											printd ("\nStart a new game? [Y/N]\n");
												
											t2:	switch (getch())
												{
													case 'y' :
													case 'Y' :
														system ("cls");
														return story ();
													break;
														
													case 'n' :
													case 'N' :
														system ("cls");
														printd ("The game will exit");
														Sleep (2000);
														return 0;
													break;
													
													default :
														printf ("Invalid input!\n");
														goto t2;
													break;
												}
										break;
										
										case '3':
											system ("cls");
											printd ("Anda berjalan ke arah kiri\n");
											printd ("Karena terlalu berkabut, anda tidak tahu apa yang ada di depan anda.\n");
											printd ("Tiba tiba anda kehilangan keseimbangan karena tidak ada tempat berpijak.\n");
											printd ("Anda jatuh ke jurang\n");
											printd ("Anda jatuh terus menuju kematian anda\n\n");
											printd ("GAME OVER\n\n");
											printd ("\nStart a new game? [Y/N]\n");
												
											t3:	switch (getch())
												{
													case 'y' :
													case 'Y' :
														system ("cls");
														return story ();
													break;
														
													case 'n' :
													case 'N' :
														system ("cls");
														printd ("The game will exit");
														Sleep (2000);
														return 0;
													break;
													
													default :
														printf ("Invalid input!\n");
														goto t3;
													break;
												}
										break;
										
										case '4':
											system ("cls");
											printd ("Anda berjalan ke arah kanan\n");
											printd ("Karena terlalu berkabut, anda tidak tahu apa yang ada di depan anda.\n");
											printd ("Tiba tiba anda kehilangan keseimbangan karena tidak ada tempat berpijak.\n");
											printd ("Anda jatuh ke jurang\n");
											printd ("Anda jatuh terus menuju kematian anda\n\n");
											printd ("GAME OVER\n\n");
											printd ("\nStart a new game? [Y/N]\n");
												
											t4:	switch (getch())
												{
													case 'y' :
													case 'Y' :
														system ("cls");
														return story ();
													break;
														
													case 'n' :
													case 'N' :
														system ("cls");
														printd ("The game will exit");
														Sleep (2000);
														return 0;
													break;
													
													default :
														printf ("Invalid input!\n");
														goto t4;
													break;
												}
										break;
										
										default : 
											printf ("Invalid input !\n");
											goto t0;
										break;
									}
								break;
															
								case '2':
									system ("cls");
									printd ("Anda memilih jalan sebelah kanan.\n");
									printd ("Dengan bimbang, anda berjalan menelusuri jalan itu.\n");
									printd ("Semakin anda berjalan, atmosfirnya semakin berubah.\n");
									printd ("Anda merasa tidak nyaman dengan suasana sekitar.\n");
									printd ("Anda mempercepat langkah.\n");
									printd ("Dari belakang terasa seperti ada yang mengejar meskipun tidak ada apa-apa.\n");
									printd ("Anda merasa panik dan mulai berlari.\n");
									printd ("Berlari cukup jauh.\n");
									printd ("Sampai akhirnya dari kejauhan anda melihat sebuah gerbang besar.\n");
									printd ("Anda mendekat ke gerbang itu berharap ada seseorang dibaliknya.\n");
									printd ("Sampai ke dekat gerbang itu anda melihat ke sekitar.\n");
									printd ("Ada sebuah lubang di tengah gerbang itu.\n");
									printd ("Anda tidak tahu harus berbuat apa.\n");
									printd ("Dari belakang angin berhembus semakin kencang.\n");
									printd ("Anda merasakan kehadiran ssuatu yang mendekat anda.\n");
									printd ("Anda merasa panik dan memumukul-mukul gerbang berharap gerbannya akan terbuka.\n");
									printd ("Tiba-tiba ada sosok bayangan menghampiri anda dengan cepat.\n");
									printd ("Anda pun pingsan.\n\n");
									printd ("Press any key to continue . . . \n");
									getch ();
									system ("cls");
									printd ("Anda terbangun di dalam sebuah kamar rumah sakit.\n");
									printd ("Anda kebingungan dan mengira itu semua hanya mimpi.\n\n");
									printd ("'Mimpinya.. terlalu nyata..'\n\n");
									printd ("'Siapa bilang ini cuma mimpi.'\n\n");
									printd ("Tiba-tiba ada seorang pria di sebelah anda berkata demikian.\n");
									printd ("Anda dibuat pingsan olehnya.\n\n");
									printd ("Press any key to continue . . . \n");
									system ("cls");
									printd ("Anda terbangun kembali. . . .\n");
									printd ("Di ruangan yang sama seperti anda bangun pertama kali.\n");
									printd ("\nCONFUSION ENDING ACHIEVED\n\n");
									printd ("Start a new game? [Y/N]\n");
								t8:	switch (getch())
											{
															
													//START NEW GAME
												case 'Y':
												case 'y':
													system ("cls");
													return story ();
												break;
														
														//EXIT
												case 'N':
												case 'n':
													system ("cls");
													printf ("The game will exit");
													Sleep (2000);
													return 0;
												break;
														
												default :
													printf ("Invalid input \n");
													goto t8;
												break;
											}
									
									
								
								break;
									
								default :
									printf ("Invalid input!\n");
									goto p7;
								break; 
										
							}
					
						break;
						
						default :
						printf ("Invalid input!\n");
						goto a1;	
					}
				break;
				// BLOCK STORY A ENDS
				// ========================================================================================================================================================================
					
				
					
				// BLOCK STORY B
				// ========================================================================================================================================================================
				// STORY B	
				case '2' : 
					system ("cls");
					printd ("Anda mengambil rubik tersebut.\n");
					printd ("Anda mencoba untuk menyelesaikan rubik itu.\n");
					printd ("Anda mampu menyelesaikannya meskipun memakan waktu agak lama.\n");
					printd ("Tiba-tiba laci pada bagian kiri meja itu terbuka.\n");
					printd ("Di dalamnya ada sebuah kertas bertuliskan\n");
					printd ("'Berjalanlah ke depan. Kamu akan menemukan dua buah pintu bersebelahan. Pilih salah satu dan masuklah.'\n");
					printd ("Anda berjalan menghampiri pintu itu.\n");
					printd ("\n1. Pintu kiri\n2. Pintu kanan\n\n");
					printd ("Pintu mana yang akan anda pilih? [1/2]\n");
					
				b:
						switch (getch())
					{
						
						//STORY B1 - LEFT DOOR PUZZLE WORLD <SAFE ZONE NO DEATH FLAG>
						case '1':
							system ("cls");
							printd ("Anda masuk ke pintu kiri.\n");
							goto paralel2;
						break;
						
						//STORY B2 - RIGHT DOOR - STORY JUMP TO ROUTE C NO GUN <DEATH FLAG>
						case '2':
							system ("cls");
							goto paralel1;
						break;
						
						default :
						printf ("Invalid input!\n");
						goto b;	
					}
				break;
				// BLOCK STORY B ENDS
				// ========================================================================================================================================================================
				
				
				
				// BLOCK STORY C
				// ======================================================================================================================================================================== 
				//STORY C
				
				case '3' :
					system ("cls");
					printd ("Anda mengabil buku tersebut dan memeriksa halaman-halamannya, banyak tulisan-tulisan yang anda tidak ketahui.\n");
					printd ("Ternyata ada sebuah kartu gesek tertempel pada sampul bagian dalam buku.\n");
					printd ("Anda mencari tempat yang tepat untuk menggunakan kartu tersebut.\n");
					printd ("Pada meja terdapat laci bertuliskan 'Untuk pertahanan diri' \ndengan EDC (scanner tempat mengesek kartu) yang tertempel di sebelah gagangnya.\n");
					printd ("Anda menggesekkan kartunya dan lacinya terbuka.\n");
					printd ("Di dalamnya terdapat sebuah pistol.\n\n");
					printd ("Apakah anda akan mengambil pistol tersebut ? [Y/N]\n");
					
				c1:	
					
					
						switch (getch())
						{
						
						//STORY C1 - TAKE GUN

						case 'Y':
						case 'y':
							system ("cls");
							printd ("Anda mengambil pistol tersebut.\n");
							printd ("Anda menutup kembali laci, dan *click* terdengar dari pintu sebelah kanan terbuka kuncinya, juga laci tersebut terkunci.\n");
							printd ("Anda mencoba membuka pintu lain, tetapi terkunci, tidak ada pilihan lain, anda memasuki pintu kanan.\n");
							printd ("Dibalik pintu tersebut, adalah sebuah lorong panjang yang dingin dan berkabut.\n");
							printd ("Anda berjalan terus, lalu bertemu seorang pria yang duduk penuh dengan luka fatal.\n");
							printd ("Anda menghampiri orang tersebut, orang tersebut berkata 'Tolong... Bunuh saya...'\n");
							printd ("Anda bimbang karena belum pernah membunuh orang sebelumnya.\n");
							printd ("Tetapi anda tidak tega meninggalkan orang itu tersiksa dengan luka-lukanya.\n\n");
							printd ("1. Menembak orang tersebut\n");
							printd ("2. Tidak menghiraukan dan terus berjalan\n\n");
							printd ("Apa yang akan anda lakukan ? [1/2]\n");
							
							
						c2:		switch (getch())
								{
									//STORY C2 - SHOOT
									case '1' :
										system ("cls");
										printd ("Anda merasa kasihan dengan orang itu.\n");
										printd ("Anda memutuskan untuk mengakhiri penderitaannya.\n");
										printd ("Meskipun sebenarnya anda tidak sanggup membunuhnya.\n");
										printd ("Anda menodongkan pistol kearah orang itu.\n");
										printd ("Secara samar-samar terdengar orang itu mengatakan, 'Terima kasih....'.\n");
										printd ("Anda bersiap untuk menarik pelatuknya.\n");
										printd ("*DOR*\n");
										printd ("Peluru tertanam pada kepala orang itu.\n");
										printd ("Orang tersebut pun terjatuh, setelah anda lihat, ternyata orang itu terinfeksi semacam virus.\n");
										printd ("Sadar karena anda memilih pilihan yang benar, anda merasa lega.\n\n");
										printd ("Setelah sampai di ujung lorong, anda mulai mengingat sesuatu dan membaca buku yang anda ambil tadi.\n");
										printd ("'Bukan kah ini semua tulisan ku?'\n");
										printd ("Di ujung lorong ada dua pintu kiri dan kanan\n");
										printd ("Di atas pintu kiri ditulis huruf 'Z' dan pintu kanan di tulis huruf 'P'\n\n");
										printd ("1. Pintu kiri [Z]\n");
										printd ("2. Pintu kanan [P]\n\n");
										printd ("Pintu mana yang anda pilih ? [1/2]\n");
										
									q1: switch (getch())
										{
											//STORY C3 SHOOT - DOOR CHOICE DEATH FLAG
											case '1' :
												system ("cls");
												printd ("Anda membuka pintu ber label 'Z'\n");
												printd ("Di dalam ruang tersebut, penuh dengan zombie\n");
												printd ("Anda mencoba untuk lari, namun salah sat zombie telah memegang kaki anda\n");
												printd ("Anda digigit habis habisan oleh kumpulan zombie itu\n");
												printd ("\nGAME OVER\n\n");
												printd ("\nStart a new game? [Y/N]\n");
												
											q2:	switch (getch())
												{	// START NEW GAME
													case 'y' :
													case 'Y' :
														system ("cls");
														return story ();
													break;
													
													// EXIT GAME	
													case 'n' :
													case 'N' :
														system ("cls");
														printd ("The game will exit");
														Sleep (2000);
														return 0;
													break;
													
													default :
														printf ("Invalid input!\n");
														goto q2;
													break;
												}
											break;
											
											//STORY C3 SHOOT - DOOR CHOICE PORTAL
											case '2' :
												system ("cls");
												printd ("Anda membuka pintu ber label 'P'\n");
												printd ("Di dalam ruang tersebut, terdapat sebuah portal\n");
												printd ("Entah mengapa anda merasa tidak asing dari bau portal tersebut\n");
												printd ("Tidak ada pilihan lain, anda memasuki portal tersebut\n");
												printd ("Di dalam portal tersebut kepala anda merasakan sakit sekali\n");
												printd ("Ingatan anda mulai kembali, dan akhirnya kembali sepenuhnya\n");
												printd ("Anda tiba dimana portal itu mengantar anda\n");
												printd ("Anda tidak begitu bodoh untuk tidak mengenali kota tempat anda lahir\n");
												printd ("'Aku pulang?' berbicara pada diri anda sendiri serta kebingungan karena...\n");
												printd ("*Anda melihat sekeliling\n\n");
												printd ("Semua rumah yang ada di sekeliling anda sudah hancur dan terbakar\n");
												printd ("Anda berlari secepat mungkin menuju rumah anda\n\n");
												printd ("Dengan sedih andapun melihat rumah anda yang sudah hancur\n");
												printd ("Di depan rumah anda ada seorang wanita yang sangat familiar\n");
												printd ("Sebelum anda sempat memanggilnya, wanita itu membalikan badannya\n");
												printd ("Anda sangat kaget karena jelas wanita itu adalah ibu anda\n");
												printd ("Menangis anda karena saat itu juga anda sadar bahwa ibu anda terinfeksi virus seperti orang yang anda tembak tadi\n");
												printd ("'Anakku.....' samar samar suara ibu anda\n");
												printd ("Konflik dengan diri anda sendiri, apakah anda akan menembak ibu anda untuk mengakhiri penderitaannya....\n");
												printd ("... atau anda rela mati bodoh di pelukan ibu anda...\n\n");
												printd ("Apakah anda akan menembak ibu anda ? [Y/N]\n");
												
											q3:	switch (getch())
												{
													// STORY C4 SHOOT - PORTAL - SHOOT (MADNESS ENDING)
													case 'Y' : 
													case 'y' :
														system ("cls");
														printd ("Ibu mu mulai medekatimu\n");
														printd ("'Berhenti bu!, jangan paksa ku untuk melakukan ini!'\n");
														printd ("Ibu mu telah menunjukan tanda tanda berubah menjadi zombie sepenuhnya\n");
														printd ("Dengan berat hati anda memegang pelatuk pistol anda\n");
														printd ("'Maafkan aku bu.....'\n");
														printd ("*DOR*\n");
														printd ("Dengan berat hati anda menembak ibu anda\n");
														printd ("Saat ibu anda terjatuh, anda melihat wajah ibu anda yang tersenyum dengan hangat\n");
														printd ("Hati anda merasa sesak setelah itu\n");
														printd ("Anda mulai gila saat anda sadar apa yang telah anda lakukan, dan akan anda lakukan setelah ini\n");
														printd ("Anda masuk ke rumah anda yang sudah setengah hancur\n");
														printd ("Anda menemukan sebuah kaleder\n");
														printd ("'Tahun 2130.... ahahah..AHAHAHAHAHAHA!'\n");
														printd ("Kegilaan sudah merasuki diri anda, anda tidak dapat mengkontrol diri anda\n");
														printd ("Anda menodong pistol ke kepala anda sendiri *DOR*\n");
														printd ("\nMADNESS ENDING ACHIEVED\n\n");
														printd ("Back to Main Menu? [Y/N]\n");
													q4:	switch (getch())
														{
															// START NEW GAME
															case 'Y':
															case 'y':
																system ("cls");
																return story ();
															break;
															
															// EXIT GAME
															case 'N':
															case 'n':	
																system ("cls");
																printd ("The game will exit");
																Sleep (2000);
																return 0;
															break;
															
															default :
																printf ("Invalid input!\n");
																goto q4;
														}
														
													break;
													
													// SHOOT - PORTAL - DID NOT SHOOT
													case 'N':
													case 'n':
														system ("cls");
														printd ("Anda berlari menuju ibu anda\n");
														printd ("Anda dengan erat memeluknya dan secara bersamaan anda digigit oleh ibu anda\n");
														printd ("Anda pun mulai berubah menjadi zombie.......\n\n");
														printd ("Tapi setelah itu, anda merasa aneh\n");
														printd ("Anda masih sadar dengan tubuh anda\n");
														printd ("Ibu anda pun berbicara dengan bahasa yang seharusnya tidak anda mengerti\n");
														printd ("Entah mengapa anda mengerti apa yang ibu anda katakan dengan suara zombienya\n");
														printd ("Ibu anda menyuruh anda jalan masuk ke rumah\n");
														printd ("Ternyata di dalam rumah, semua keluarga anda ada di sana\n");
														printd ("dengan kondisi yang menjadi zombie, ada yang tangannya hanya satu\n");
														printd ("ada pula yang kepalanya di pegangi tangannya tetapi masih bisa berbicara\n");
														printd ("Anda pun hidup bahagia dengan keluarga anda dalam kondisi menjadi zombie\n");
														printd ("Anda hidup... hidup... dan hidup sampai akhir zaman\n\n");
														printd ("JOKE ENDING ACHIEVED\n\n");
														printd ("Back to Main Menu? [Y/N]\n");
													q5:	switch (getch())
														{	
															// START NEW GAME
															case 'Y':
															case 'y':
																system ("cls");
																return story ();
															break;
															
															// EXIT GAME
															case 'N':
															case 'n':	
																system ("cls");
																printd ("The game will exit");
																Sleep (2000);
																return 0;
															break;
															
															default :
																printf ("Invalid input!\n");
																goto q4;
														}
													break;
													
													default:
														printf ("Invalid input!\n");
														goto q3;		
												}
											break;
											
											default : 
												printf ("Invalid input!\n");
												goto q1;		
										}
									break;
										
									// STORY C2 - NO SHOOT
									case '2' : 
										system ("cls");
										printd ("Anda merasa tidak sanggup membunuhnya.\n");
										printd ("Anda memutuskan untuk tetap berjalan ke depan tanpa menghiraukan orang itu.\n");
										printd ("Anda berjalan semakin jauh tetapi orang itu masih merintih kesakitan.\n");
										printd ("Semakin jauh anda berjalan, suara rintihan menjadi samar-samar dan mengecil sedikit demi sedikit.\n");
										printd ("Tiba-tiba dari kejauhan terdengar suara berlari dari depan.\n");
										printd ("Di kejauhan terlihat sesorang berlari kearah anda dengan tergesa-gesa.\n");
										printd ("Ternyata itu adalah orang yang tadi anda tinggal sendiri.\n");
										printd ("Anda panik dan kebingunan sambil bersiap untuk menembak.\n");
										printd ("*DOR*\n");
										printd ("Tembakan anda meleset karena terlalu panik.\n");
										printd ("Anda mencoba untuk menembak kembali namun ternyata pistolnya hanya terisi satu peluru.\n\n");
										printd ("1. Mencoba menyerang dengan tangan kosong\n2. Mencoba untuk lari\n");
										printd ("\nApa yang akan anda lakukan? [1/2]\n");
										
									c3: switch (getch())
									{
										//DEATH FLAG - NO MERCY KILLING SCENARIO - FIGHT BACK
										case '1' :
											system ("cls");
											printd ("\nAnda mencoba untuk melawan.\n");
											printd ("Anda melontarkan tinjuan yang kuat ke arah orang itu.\n");
											printd ("Tinjuan berhasil, namun orang itu masih mampu berdiri dengan tegak.\n");
											printd ("Setelah anda lihat lebih dekat, ternyata orang itu terinfeksi semacam virus\n");
											printd ("\n");
											printd ("Namun orang itu terlalu kuat.\n");
											printd ("Anda tersungkur karena kekuatannya.\n");
											printd ("Anda dihajar dan digigit higga tewas.\n");
											printd ("\nGAME OVER\n\n");
											printd ("\nStart a new game? [Y/N]\n");
										z2: 
											switch (getch())
											{
															
												//START NEW GAME
												case 'Y':
												case 'y':
													system ("cls");
													return story ();
												break;
															
												//EXIT GAME
												case 'N':
												case 'n':
													system ("cls");
													printd ("The game will exit");
													Sleep (2000);
													return 0;
												break;
															
												default :
													printf ("Invalid input!\n");
												goto z2;		
											}
		
										break;
										
										//DEATH FLAG - NO MERCY KILLING SCENARIO - RUN AWAY	
										case '2' : 
											system ("cls");
											printd ("Anda mencoba untuk melarikan diri.\n");
											printd ("Anda berlari sekuat tenaga.\n");
											printd ("Namun tampaknya lorong panjang itu tak kunjung berakhir.\n");
											printd ("Anda memaksa diri untuk tetap berlari.\n");
											printd ("Terlalu lelah, anda tersungkur ke tanah karena tersandung kaki sendiri.\n");
											printd ("Akhirnya orang itu mampu menyusul anda.\n");
											printd ("ternyata orang tersebut terinfeksi semacam virus.\n");
											printd ("Anda tertangkap.\n");
											printd ("Anda didigit habis-habisan.\n");
											printd ("Anda tewas di tempat dengan mengenaskan.\n");
											printd ("\nGAME OVER\n\n");
											printd ("\nStart a new game? [Y/N]\n");
										z1: 
											switch (getch())
											{
															
													//START NEW GAME
												case 'Y':
												case 'y':
													system ("cls");
													return story ();
												break;
														
													//EXIT GAME
												case 'N':
												case 'n':
													system ("cls");
													printd ("The game will exit");
													Sleep (2000);
													return 0;
												break;
														
												default :
													printf ("Invalid input!\n");
													goto z1;
												break;	
											}
										break;
										
									default :
										printf ("Invalid input!\n");
										goto c3;
									break;
									}
								default :
									printf ("Invalid input!\n");
									goto c2;			
								}
						break; 
						
						
						//STORY C2 - DID NOT TAKE GUN
						case 'N':
						case 'n':
							system ("cls");
							printd ("Anda tidak mengambil pistol itu.\n");
							printd ("Anda menutup kembali laci, dan *click* terdengar dari pintu sebelah kanan terbuka kuncinya, juga laci tersebut terkunci.\n");
							printd ("Anda mencoba membuka pintu lain, tetapi terkunci, tidak ada pilihan lain, anda memasuki pintu kanan.\n");
				paralel1:	printd ("Dibalik pintu tersebut, adalah sebuah lorong panjang yang dingin dan berkabut.\n");
							printd ("Anda berjalan terus, lalu bertemu seorang pria yang duduk penuh dengan luka fatal.\n");
							printd ("Anda menghampiri orang tersebut, orang tersebut berkata 'Tolong... Bunuh saya...'\n");
							printd ("Anda bimbang karena belum pernah membunuh orang sebelumnya.\n");
							printd ("Tetapi anda tidak tega meninggalkan orang itu tersiksa dengan luka-lukanya.\n\n");
							printd ("1. Mencoba membantu orang tersebut\n");
							printd ("2. Tidak menghiraukan dan terus berjalan\n\n");
							printd ("Apa yang akan anda lakukan ? [1/2]\n");
							
						w0:	

							switch (getch())
							{
								// STORY C2 - HELP - DEATH FLAG
								case '1' :
									system ("cls");
									printd ("Anda mencoba membantu orang tersebut dengan menggendong orang tersebut\n");
									printd ("Setelah beberapa saat anda jalan di lorong tersebut, anda merasa ada yang aneh dengan orang tersebut\n");
									printd ("'Pak ?' anda memanggilnya\n");
									printd ("Setelah anda menengok belakang, orang tersebut sudah berubah sepenuhnya karena terinfeksi semacam virus\n");
									printd ("Orang tersebut berbuah menjadi zombie dan menggigit anda\n");
									printd ("Anda mati mengenaskan\n");
									printd ("\nGAME OVER\n\n");
									printd ("\nStart a new game ? [Y/N]\n");
								w1:	
									
									switch (getch())
									{
										// START NEW GAME
										case 'Y':
										case 'y':
											system ("cls");
											return story ();
										break;
										
										// EXIT GAME
										case 'N':
										case 'n':
											system ("cls");
											printd ("The game will exit ");
											Sleep (2000);
											return 0;
											
										default :
											printf ("invalid input!\n");
											goto w1;
									}
								break;
								
								// STORY C2 - IGNORE 
								case '2' :
										system ("cls");
										printd ("Anda berjalan semakin jauh tetapi orang itu masih merintih kesakitan.\n");
										printd ("Semakin jauh anda berjalan, suara rintihan menjadi samar-samar dan mengecil sedikit demi sedikit.\n");
										printd ("Tiba-tiba dari kejauhan terdengar suara berlari dari depan.\n");
										printd ("Di kejauhan terlihat sesorang berlari kearah anda dengan tergesa-gesa.\n");
										printd ("Ternyata itu adalah orang yang tadi anda tinggal sendiri.\n");
										printd ("1. Mencoba menyerang dengan tangan kosong\n2. Mencoba untuk lari\n");
										printd ("\nApa yang akan anda lakukan?\n");
										
									w2: 
										
										
									switch (getch())
									{
										//DEATH FLAG - NO MERCY KILLING SCENARIO - FIGHT BACK
										case '1' :
											system ("cls");
											printd ("Anda mencoba untuk melawan.\n");
											printd ("Anda melontarkan tinjuan yang kuat ke arah orang itu.\n");
											printd ("Tinjuan berhasil, namun orang itu masih mampu berdiri dengan tegak.\n");
											printd ("Setelah anda lihat lebih dekat, ternyata orang itu terinfeksi semacam virus\n");
											printd ("\n");
											printd ("Namun orang itu terlalu kuat.\n");
											printd ("Anda tersungkur karena kekuatannya.\n");
											printd ("Anda dihajar dan digigit higga tewas.\n");
											printd ("\nGAME OVER\n\n");
											printd ("\nStart a new game? [Y/N]\n");
										w3: 
											switch (getch())
											{
															
												//START NEW GAME
												case 'Y':
												case 'y':
													system ("cls");
													return story ();
												break;
															
												//EXIT
												case 'N':
												case 'n':
													system ("cls");
													printd ("The game will exit");
													Sleep (2000);
													return 0;
												break;
															
												default :
													printf ("Invalid input \n");
												goto w3;		
											}
		
										break;
										
										//DEATH FLAG - NO MERCY KILLING SCENARIO - RUN AWAY	
										case '2' :
											system ("cls"); 
											printd ("Anda mencoba untuk melarikan diri.\n");
											printd ("Anda berlari sekuat tenaga.\n");
											printd ("Namun tampaknya lorong panjang itu tak kunjung berakhir.\n");
											printd ("Anda memaksa diri untuk tetap berlari.\n");
											printd ("Terlalu lelah, anda tersungkur ke tanah karena tersandung kaki sendiri.\n");
											printd ("Akhirnya orang itu mampu menyusul anda.\n");
											printd ("Ternyata orang tersebut terinfeksi semacam virus.\n");
											printd ("Anda tertangkap.\n");
											printd ("Anda didigit habis-habisan.\n");
											printd ("Anda tewas di tempat dengan mengenaskan.\n");
											printd ("\nGAME OVER\n\n");
											printd ("\nStart a new game? [Y/N]\n");
										w4: 
											switch (getch())
											{
															
													//START NEW GAME
												case 'Y':
												case 'y':
													system ("cls");
													return story ();
												break;
														
														//EXIT
												case 'N':
												case 'n':
													system ("cls");
													printf ("The game will exit");
													Sleep (2000);
													return 0;
												break;
														
												default :
													printf ("Invalid input \n");
													goto w4;
												break;
											}
										break;
										
										default :
										printf ("Invalid input!\n");
										goto w2;	
									}
								default :
								printf ("Invalid input!\n");
								goto w0;
								break;	
							}
						default :
						printf ("Invalid input!\n");
						goto c1;	
						break;
						
						}
				break;
				// BLOCK STORY C ENDS
				// ========================================================================================================================================================================
				
				default :
					printf ("Invalid input!\n");
					goto x2;
				break;
			}
			break;
		
		
//============================================================================================================================================//
// BLOCK HELP //
			case '2' :
			help ();	// KE MENU HELP
			break;
			
//============================================================================================================================================//
// BLOCK EXIT //
			case '3' :
			printf ("\nThe game will exit");
			Sleep (2000);
			return 0;
			break;

			
//============================================================================================================================================//

			default :
			printf ("Invalid input!\n");
			goto x1;	
			break;
						
		}


}


// FUNCTION MAIN 
int main()
{
	printf ("\n\n\n\n\n\n");
	printf ("						");
	printd ("Checking Compatibility ....");
	Sleep (1000);
	printf ("   Success!");
	Sleep (1000);
	system ("cls");
	printf ("\n\n\n\n\n\n");
	printf ("						");
	printd ("GAME ");
	printd ("START ");
	printd (". . . . . . . . ");
	Sleep (500);
	story(); 				// KE START MENU
}
