/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01507cb4; name: FUN_01507cb4
 */


void FUN_01507cb4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  local_58 = (long *)0x0;
  local_70 = 0x1c128de5cab86fb2;
  pcStack_68 = "waza_shop_list";
  local_60 = 0xe;
  uVar2 = thunk_FUN_00d2ee28(param_1 + 0x180,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  lVar3 = *(long *)(param_1 + 0x630);
  if (*(int *)(lVar3 + 0xb0) != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      uVar4 = (ulong)*(uint *)(*(long *)(lVar3 + 0xa8) + lVar5);
      lVar3 = param_1 + uVar4 * 0x10;
      if (*(int *)(lVar3 + 0x648) != 0) {
        FUN_02c61878(*(undefined8 *)(param_1 + 0x5b8),*(undefined4 *)(lVar3 + 0x640));
        *(undefined4 *)(lVar3 + 0x648) = 0;
        iVar1 = FUN_0281efbc(uVar2,uVar4);
        if (iVar1 != -1) {
          FUN_0150654c(param_1,lVar3 + 0x63c,iVar1);
        }
      }
      lVar3 = *(long *)(param_1 + 0x630);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 8;
    } while (uVar6 < *(uint *)(lVar3 + 0xb0));
  }
  uVar6 = FUN_0281a514(uVar2);
  FUN_01506874(param_1,param_1 + (uVar6 & 0xffffffff) * 0x10 + 0x63c);
  FUN_015065d4(param_1);
  FUN_01504f70(param_1);
  return;
}


