/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024b130; name: FUN_0024b130
 */


void FUN_0024b130(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  long local_50;
  long lStack_48;
  
  uVar2 = *(byte *)(param_4 + 10) - 1;
  if (uVar2 < 3) {
    uVar5 = *(undefined4 *)(&DAT_039cfcfc + (long)(char)uVar2 * 4);
  }
  else {
    uVar5 = 0;
  }
  uVar3 = FUN_0022e8c8(*(undefined8 *)(param_2 + 0xb8),uVar5);
  FUN_00877788(param_3,uVar3);
  plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                   (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
  lStack_48 = plVar1[1];
  local_50 = *plVar1 + (long)*(int *)(param_5 + 0xc);
  lVar4 = FUN_00244288(param_1);
  lVar6 = *(long *)(lVar4 + 0x20);
  lVar4 = FUN_00244288(param_1);
  FUN_00878324(param_3,*(undefined4 *)
                        (*(long *)(lVar6 + 0x18) + (ulong)*(ushort *)(lVar4 + 0x4a) * 4),0,&local_50
               ,0x230);
  plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                   (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
  lStack_48 = plVar1[1];
  local_50 = *plVar1 + (long)*(int *)(param_5 + 0x10);
  FUN_00878324(param_3,*(undefined4 *)(param_5 + 4),4,&local_50,0x120);
  FUN_0022d450(param_3,param_2);
  uVar3 = FUN_00244288(param_1);
  FUN_002418b0(uVar3,param_3);
  uVar3 = FUN_00244288(param_1);
  FUN_0024152c(uVar3,param_3,param_2);
  return;
}


