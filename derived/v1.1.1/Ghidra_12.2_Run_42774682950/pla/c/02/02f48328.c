/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f48328; name: FUN_02f48328
 */


long FUN_02f48328(long param_1,int *param_2,int param_3,undefined8 param_4,int *param_5,int param_6)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = FUN_02f3c6c0(param_4,0);
  lVar5 = 0;
  if (lVar4 != 0) {
    lVar5 = -(long)(*(int *)(*(long *)(lVar4 + 0x100) + (ulong)*(uint *)(lVar4 + 0x108) * 0x10 +
                            -0xc) - *(int *)(*(long *)(lVar4 + 0x100) + 4));
  }
  auVar1 = SEXT816((long)((ulong)DAT_042ab258 * (long)*param_2)) * SEXT816(0x20c49ba5e353f7cf);
  iVar2 = ((int)(auVar1._8_8_ >> 7) - (auVar1._12_4_ >> 0x1f)) - param_2[2];
  if (iVar2 <= param_3) {
    iVar2 = param_3;
  }
  auVar1 = SEXT816((long)((long)*param_5 * (ulong)DAT_042ab258)) * SEXT816(0x20c49ba5e353f7cf);
  iVar3 = ((int)(auVar1._8_8_ >> 7) - (auVar1._12_4_ >> 0x1f)) - param_5[2];
  if (iVar3 <= param_6) {
    iVar3 = param_6;
  }
  lVar5 = lVar5 + param_1 + (long)iVar3;
  lVar4 = param_1 + iVar2;
  if (param_1 + iVar2 <= lVar5) {
    lVar4 = lVar5;
  }
  return lVar4;
}


