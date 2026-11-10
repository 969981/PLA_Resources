/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f58034; name: FUN_00f58034
 */


void FUN_00f58034(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_230 [512];
  undefined4 local_24;
  
  iVar4 = FUN_00154450(*param_1,param_1[1]);
  if (iVar4 == 1) {
    memset(auStack_230,0,0x200);
    local_24 = 0;
    FUN_00f581b0(auStack_230,&local_24);
    FUN_00155a20(*param_1,auStack_230,0);
    FUN_00151fe0(*param_1,0,2);
    FUN_00f56e40();
    if ((DAT_043b5498 & 1) == 0) {
      uVar1 = (ulong)(DAT_043b5498 >> 1);
      puVar3 = &DAT_043b5499;
    }
    else {
      uVar1 = DAT_043b54a0;
      puVar3 = DAT_043b54a8;
    }
    FUN_001514f0(*param_1,puVar3,uVar1);
    FUN_00152550(*param_1,0xfffffffe,&DAT_038f8fce);
    FUN_001516f0(*param_1,&LAB_00f58160,0);
    FUN_00152550(*param_1,0xfffffffe,&DAT_0397bfcb);
    uVar6 = *param_1;
    lVar5 = FUN_008cca50();
    lVar2 = lVar5 + 0x2d1;
    if ((*(byte *)(lVar5 + 0x2d0) & 1) != 0) {
      lVar2 = *(long *)(lVar5 + 0x2e0);
    }
    FUN_00152550(uVar6,0xfffffffe,lVar2);
  }
  FUN_00152ae0(*param_1,0xfffffffe);
  return;
}


