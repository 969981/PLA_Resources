/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023fec04; name: FUN_023fec04
 */


void FUN_023fec04(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_230 [512];
  undefined4 local_24;
  
  iVar3 = FUN_00154450(*param_1,param_1[1]);
  if (iVar3 == 1) {
    memset(auStack_230,0,0x200);
    local_24 = 0;
    FUN_023fed70(auStack_230,&local_24);
    FUN_00155a20(*param_1,auStack_230,0);
    FUN_00151fe0(*param_1,0,2);
    FUN_023fc140();
    if (((byte)DAT_043e4820 & 1) == 0) {
      uVar1 = (ulong)((byte)DAT_043e4820 >> 1);
      uVar5 = 0x43e4821;
    }
    else {
      uVar1 = DAT_043e4828;
      uVar5 = DAT_043e4830;
    }
    FUN_001514f0(*param_1,uVar5,uVar1);
    FUN_00152550(*param_1,0xfffffffe,&DAT_038f8fce);
    FUN_001516f0(*param_1,FUN_023fed20,0);
    FUN_00152550(*param_1,0xfffffffe,&DAT_0397bfcb);
    uVar5 = *param_1;
    lVar4 = FUN_008cca50();
    lVar2 = lVar4 + 0x2d1;
    if ((*(byte *)(lVar4 + 0x2d0) & 1) != 0) {
      lVar2 = *(long *)(lVar4 + 0x2e0);
    }
    FUN_00152550(uVar5,0xfffffffe,lVar2);
  }
  FUN_00152ae0(*param_1,0xfffffffe);
  return;
}


