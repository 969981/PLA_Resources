/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03179e28; name: FUN_03179e28
 */


void FUN_03179e28(long param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *local_50;
  undefined8 local_48;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x38) + (long)*param_2 * 0xf0);
  local_48 = -0x8000000000000000;
  local_50 = (undefined8 *)0x0;
  FUN_0315f5d0(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(*(long *)(lVar5 + 0x20) + 0x180),
               &local_50);
  puVar1 = local_50;
  iVar2 = (int)local_48;
  lVar6 = (long)(int)local_48;
  if ((int)local_48 != 0) {
    uVar3 = FUN_0318af9c(lVar5,*local_50,*(undefined4 *)(local_50 + 1));
    FUN_0315cdd8(*(undefined4 *)(puVar1 + 3),uVar3,lVar5);
    if (iVar2 != 1) {
      puVar7 = puVar1 + 4;
      do {
        uVar3 = FUN_0318af9c(lVar5,*puVar7,*(undefined4 *)(puVar7 + 1));
        FUN_0315cdd8(*(undefined4 *)(puVar7 + 3),uVar3,lVar5);
        puVar7 = puVar7 + 4;
      } while (puVar7 != puVar1 + lVar6 * 4);
    }
  }
  lVar6 = *(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0x68) + 200);
  if (lVar6 != 0) {
    FUN_0317dfb0(lVar6,*(undefined8 *)(param_1 + 0x58),lVar5);
  }
  lVar5 = local_48;
  uVar4 = (ulong)local_48._4_4_;
  local_48 = (ulong)local_48._4_4_ << 0x20;
  if ((-1 < lVar5) && (local_50 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_50,(uVar4 & 0x3fffffff) << 5);
  }
  return;
}


