/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e7370; name: FUN_004e7370
 */


bool FUN_004e7370(long param_1,int param_2)

{
  void *__dest;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [64];
  
  FUN_004bda70();
  iVar1 = FUN_0041ccc0();
  __dest = (void *)(param_1 + 0x374);
  if (*(int *)(param_1 + 0x38) != param_2) {
    __dest = (void *)(param_1 + 0x334);
  }
  if (param_2 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x438);
    lVar4 = param_1 + 0x440;
    FUN_004c5cf0(param_1 + 0x7f8);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x468);
    *(undefined4 *)(param_1 + 0x7c) = 1;
    lVar4 = param_1 + 0x470;
    FUN_004c5d00(param_1 + 0x7f8);
  }
  uVar3 = FUN_004bda70(param_1);
  iVar2 = FUN_004e7130(param_1,param_2,uVar3,*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x278),
                       __dest,0,"traffic upd",0xb,auStack_80,lVar4,uVar5);
  if (iVar2 != 0) {
    memcpy(__dest,auStack_80,(long)iVar1);
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  FUN_004006a0(auStack_80,0x40);
  return iVar2 != 0;
}


