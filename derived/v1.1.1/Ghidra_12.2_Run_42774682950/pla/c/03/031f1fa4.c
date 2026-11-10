/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f1fa4; name: FUN_031f1fa4
 */


void FUN_031f1fa4(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined1 *local_48;
  undefined8 local_40;
  undefined1 auStack_38 [16];
  long local_28;
  
  local_48 = auStack_38;
  local_28 = 0;
  local_40 = -0x7ffffffeffffffff;
  FUN_031f205c(param_1,&local_48);
  FUN_032195c4(*(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x150));
  if (local_28 != 0) {
    lVar2 = local_28 << 4;
    plVar3 = (long *)(local_48 + 8);
    do {
      if (*plVar3 != 0) {
        FUN_032d647c();
      }
      lVar2 = lVar2 + -0x10;
      plVar3 = plVar3 + 2;
    } while (lVar2 != 0);
  }
  lVar2 = local_40;
  uVar1 = (ulong)local_40._4_4_;
  local_40 = (ulong)local_40._4_4_ << 0x20;
  if ((-1 < lVar2) && (local_48 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_48,(uVar1 & 0x3fffffff) << 4);
  }
  return;
}


