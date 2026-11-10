/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f42d68; name: FUN_02f42d68
 */


undefined8 FUN_02f42d68(long param_1,undefined4 param_2,undefined8 param_3)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long local_38;
  
  if (*(int *)(param_1 + 0xd8) != 0) {
    plVar3 = *(long **)(param_1 + 0xd0);
    do {
      lVar4 = *plVar3;
      uVar1 = FUN_02f05244(lVar4 + 0x18,param_2,param_3);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
      local_38 = *(long *)(lVar4 + 0x88);
      if (local_38 != 0) {
        uVar1 = FUN_02f05244(local_38 + 0x18,param_2,param_3);
        if ((uVar1 & 1) != 0) {
          return 1;
        }
        while (local_38 = *(long *)(local_38 + 0x88), local_38 != 0) {
          uVar1 = FUN_02f05244(local_38 + 0x18,param_2,param_3);
          if ((uVar1 & 1) != 0) {
            return 1;
          }
        }
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != (long *)(*(long *)(param_1 + 0xd0) + (ulong)*(uint *)(param_1 + 0xd8) * 8));
  }
  bVar2 = false;
  do {
    uVar1 = FUN_02f05244(param_1 + 0x18,param_2,param_3);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
    if (bVar2) {
LAB_02f42e18:
      bVar2 = true;
      param_1 = *(long *)(param_1 + 0x80);
    }
    else {
      lVar4 = *(long *)(param_1 + 0x88);
      if (lVar4 != 0) {
        do {
          uVar1 = FUN_02f05244(lVar4 + 0x18,param_2,param_3);
          if ((uVar1 & 1) != 0) {
            return 1;
          }
          lVar4 = *(long *)(lVar4 + 0x88);
        } while (lVar4 != 0);
        goto LAB_02f42e18;
      }
      param_1 = *(long *)(param_1 + 0x80);
      bVar2 = false;
    }
    if (param_1 == 0) {
      return 0;
    }
  } while( true );
}


