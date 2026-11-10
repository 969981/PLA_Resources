/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0306e23c; name: FUN_0306e23c
 */


void FUN_0306e23c(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x738) == 0) {
    return;
  }
  FUN_0306cb08();
  if (param_2 != 0) {
    puVar1 = *(undefined8 **)(param_2 + 8);
    uVar2 = (long)puVar1 + 0xfU & 0xfffffffffffffff8;
    if ((uVar2 <= *(ulong *)(param_2 + 0x10)) &&
       (*(ulong *)(param_2 + 8) = uVar2, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "YtSdf";
    }
  }
  if (*(int *)(param_1 + 0x138) == 0) {
    if (param_2 == 0) goto LAB_0306e2d8;
  }
  else {
    if (param_2 == 0) goto LAB_0306e2d8;
    puVar1 = *(undefined8 **)(param_2 + 8);
    uVar2 = *(ulong *)(param_2 + 0x10);
    uVar4 = (ulong)((long)puVar1 + 0xf) & 0xfffffffffffffff8;
    if (uVar4 <= uVar2) {
      *(ulong *)(param_2 + 8) = uVar4;
      if (puVar1 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&DAT_00000008;
      }
      else {
        *puVar1 = "YtbuildJac";
        puVar1 = *(undefined8 **)(param_2 + 8);
        uVar2 = *(ulong *)(param_2 + 0x10);
      }
    }
    uVar4 = (ulong)((long)puVar1 + 0x1f) & 0xfffffffffffffff8;
    if ((uVar4 <= uVar2) && (*(ulong *)(param_2 + 8) = uVar4, puVar1 != (undefined8 *)0x0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x130);
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x138);
      *puVar1 = &DAT_03965d10;
      puVar1[1] = uVar3;
    }
  }
  puVar1 = *(undefined8 **)(param_2 + 8);
  uVar2 = (long)puVar1 + 0x1fU & 0xfffffffffffffff8;
  if ((uVar2 <= *(ulong *)(param_2 + 0x10)) &&
     (*(ulong *)(param_2 + 8) = uVar2, puVar1 != (undefined8 *)0x0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x118);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x120);
    *puVar1 = &DAT_03965d10;
    puVar1[1] = uVar3;
  }
LAB_0306e2d8:
  FUN_0306d114(param_1 + 0x140,param_2);
  FUN_0306db10(param_1 + 0x350,param_2);
  FUN_0306de84(param_1 + 0x538,param_2);
  return;
}


