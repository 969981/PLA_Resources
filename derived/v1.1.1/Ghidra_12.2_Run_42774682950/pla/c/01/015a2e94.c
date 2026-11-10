/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015a2e94; name: FUN_015a2e94
 */


void FUN_015a2e94(undefined8 *param_1)

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
    FUN_015a3000(auStack_230,&local_24);
    FUN_00155a20(*param_1,auStack_230,0);
    FUN_00151fe0(*param_1,0,2);
    FUN_015a1ac0();
    if ((DAT_043c9d90 & 1) == 0) {
      uVar1 = (ulong)(DAT_043c9d90 >> 1);
      puVar3 = &DAT_043c9d91;
    }
    else {
      uVar1 = DAT_043c9d98;
      puVar3 = DAT_043c9da0;
    }
    FUN_001514f0(*param_1,puVar3,uVar1);
    FUN_00152550(*param_1,0xfffffffe,&DAT_038f8fce);
    FUN_001516f0(*param_1,FUN_015a2fb0,0);
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


