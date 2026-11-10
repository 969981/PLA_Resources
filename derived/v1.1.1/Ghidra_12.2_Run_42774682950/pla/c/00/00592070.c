/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00592070; name: FUN_00592070
 */


undefined8 FUN_00592070(long param_1,ulong param_2)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_handshaker_client.cc"
                 ,0x1b3,2,"assertion failed: %s","c != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((param_2 & 1) == 0) {
    uVar3 = FUN_00592190(param_1,0);
    return uVar3;
  }
  cVar1 = *(char *)(param_1 + 0xd8);
  FUN_002ef9f0(&DAT_0439ee60,&LAB_00590f00);
  plVar2 = &DAT_0439ee70;
  if (cVar1 != '\0') {
    plVar2 = &DAT_0439ee68;
  }
  lVar5 = *plVar2;
  FUN_002ef750(lVar5);
  if (*(long *)(lVar5 + 0x38) == *(long *)(lVar5 + 0x40)) {
    plVar2 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x18);
    plVar2[1] = lVar5 + 0x20;
    plVar2[2] = param_1;
    *plVar2 = 0;
    lVar4 = *(long *)(lVar5 + 0x20);
    *plVar2 = lVar4;
    *(long **)(lVar4 + 8) = plVar2;
    *(long **)(lVar5 + 0x20) = plVar2;
    *(long *)(lVar5 + 0x30) = *(long *)(lVar5 + 0x30) + 1;
                    /* try { // try from 00592100 to 00592107 has its CatchHandler @ 00592184 */
    FUN_002ef790(lVar5);
    return 0;
  }
  *(long *)(lVar5 + 0x38) = *(long *)(lVar5 + 0x38) + 1;
                    /* try { // try from 00592134 to 0059213b has its CatchHandler @ 00592180 */
  FUN_002ef790(lVar5);
  FUN_00592190(param_1,1);
  return 0;
}


