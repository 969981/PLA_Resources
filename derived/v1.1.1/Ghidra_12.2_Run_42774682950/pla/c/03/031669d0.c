/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031669d0; name: FUN_031669d0
 */


void FUN_031669d0(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    if (param_2 != 0) {
      puVar1 = *(undefined8 **)(param_2 + 8);
      uVar2 = (long)puVar1 + 0xfU & 0xfffffffffffffff8;
      if ((uVar2 <= *(ulong *)(param_2 + 0x10)) &&
         (*(ulong *)(param_2 + 8) = uVar2, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = "YtPointEdge";
      }
      FUN_0316660c(param_1 + 0x18,param_2);
      if (*(int *)(param_1 + 0x110) != 0) {
        puVar1 = *(undefined8 **)(param_2 + 8);
        uVar2 = (long)puVar1 + 0xfU & 0xfffffffffffffff8;
        if ((uVar2 <= *(ulong *)(param_2 + 0x10)) &&
           (*(ulong *)(param_2 + 8) = uVar2, puVar1 != (undefined8 *)0x0)) {
          *puVar1 = "YtCached";
        }
        FUN_03166790(param_1 + 0x100,param_2);
      }
    }
    if (*(int *)(param_1 + 0x1c8) == 0) {
      if (param_2 == 0) {
        return;
      }
    }
    else {
      if (param_2 == 0) {
        return;
      }
      puVar1 = *(undefined8 **)(param_2 + 8);
      uVar2 = (long)puVar1 + 0xfU & 0xfffffffffffffff8;
      if ((uVar2 <= *(ulong *)(param_2 + 0x10)) &&
         (*(ulong *)(param_2 + 8) = uVar2, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = "YtUncached";
      }
      FUN_03166790(param_1 + 0x1b8,param_2);
    }
    puVar1 = *(undefined8 **)(param_2 + 8);
    uVar2 = (long)puVar1 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar2 <= *(ulong *)(param_2 + 0x10)) &&
       (*(ulong *)(param_2 + 8) = uVar2, puVar1 != (undefined8 *)0x0)) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
      *puVar1 = &DAT_03965d10;
      puVar1[1] = uVar3;
    }
  }
  return;
}


