/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f1ec0; name: FUN_003f1ec0
 */


void FUN_003f1ec0(void)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  
  FUN_002ef9f0(&DAT_0439c478,&LAB_003f20f0);
  FUN_002ef750(&DAT_0439c480);
  iVar1 = DAT_0439c47c + 1;
  if (DAT_0439c47c == 0) {
    DAT_0439c47c = iVar1;
    if (DAT_0439c470 == '\x01') {
      DAT_0439c470 = '\0';
      FUN_002ef9b0(&DAT_0439c4a0);
    }
    FUN_002efa58();
    FUN_00602220();
    FUN_002fd090();
    FUN_003db800();
    FUN_003db2b0();
    FUN_003d8ef0();
    FUN_003e4240();
    FUN_003eecd4();
    FUN_003f24d0();
    FUN_002efebc();
    FUN_002f5510();
    FUN_003cdc70();
    FUN_004fcfd0();
    FUN_003f6d88();
    thunk_FUN_003f2900();
    if (0 < DAT_0439c474) {
      lVar3 = 0;
      plVar4 = (long *)&DAT_0439c4e0;
      pcVar2 = DAT_0439c4e0;
      iVar1 = DAT_0439c474;
      if (DAT_0439c4e0 != (code *)0x0) goto LAB_003f1fc4;
      while (lVar3 = lVar3 + 1, lVar3 < iVar1) {
        while( true ) {
          plVar4 = plVar4 + 2;
          pcVar2 = (code *)*plVar4;
          if (pcVar2 == (code *)0x0) break;
LAB_003f1fc4:
                    /* try { // try from 003f1fc4 to 003f1fc7 has its CatchHandler @ 003f20c4 */
          (*pcVar2)();
          lVar3 = lVar3 + 1;
          iVar1 = DAT_0439c474;
          if (DAT_0439c474 <= lVar3) goto LAB_003f1fdc;
        }
      }
    }
LAB_003f1fdc:
                    /* try { // try from 003f1fdc to 003f206b has its CatchHandler @ 003f20c8 */
    FUN_003f24e0();
    FUN_003e4280(1,10000,PTR_LAB_043740f8,0);
    FUN_003e4280(3,10000,PTR_LAB_043740f8,0);
    FUN_003e4280(4,10000,PTR_LAB_043740f8,0);
    FUN_003e4280(2,10000,&LAB_003f24b0,PTR_PTR_04374100);
    FUN_003e4280(4,0x7fffffff,&LAB_003f24c0,PTR_PTR_04374108);
    FUN_002f4230();
    FUN_003e4360();
    thunk_FUN_002f5d20();
    iVar1 = DAT_0439c47c;
  }
  else if ((iVar1 == 2) && (DAT_0439c470 == '\x01')) {
    DAT_0439c470 = '\0';
                    /* try { // try from 003f1f20 to 003f1f87 has its CatchHandler @ 003f20c8 */
    FUN_002ef9b0(&DAT_0439c4a0);
    iVar1 = DAT_0439c47c;
  }
  DAT_0439c47c = iVar1;
  nn::util::ReferSymbol("SDK MW+Nintendo+gRPC-0_0_0+NPLN");
  if (PTR_DAT_04373fe8[0x10] != '\0') {
                    /* try { // try from 003f20a0 to 003f20bb has its CatchHandler @ 003f20c8 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/init.cc",0xd4,1,
                 "grpc_init(void)");
  }
                    /* try { // try from 003f2088 to 003f2093 has its CatchHandler @ 003f20c0 */
  FUN_002ef790(&DAT_0439c480);
  return;
}


