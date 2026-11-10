/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053f330; name: FUN_0053f330
 */


undefined8 * FUN_0053f330(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar5 = (ulong)*(uint *)(param_1 + 0x28);
  do {
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    uVar5 = (ulong)(uint)((int)uVar5 << 1);
    uVar2 = param_2;
    if (param_2 <= uVar5) {
      uVar2 = uVar5;
    }
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("alloc","external/upb\\upb/upb.h",0x59,"upb_malloc");
    }
    uVar5 = uVar2 + 0x10;
    puVar3 = (undefined8 *)(*(code *)*puVar3)(puVar3,0,0,uVar5);
    if (puVar3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    *(int *)(puVar3 + 1) = (int)uVar5;
    *puVar3 = uVar4;
    *(undefined4 *)((long)puVar3 + 0xc) = 0;
    *(undefined8 **)(param_1 + 0x38) = puVar3;
    *(int *)(param_1 + 0x28) = (int)uVar5;
    if (*(long *)(param_1 + 0x40) == 0) {
      *(undefined8 **)(param_1 + 0x40) = puVar3;
    }
    *(undefined4 **)(param_1 + 0x18) = (undefined4 *)((long)puVar3 + 0xc);
    param_2 = param_2 + 0xf & 0xfffffffffffffff0;
    puVar1 = puVar3 + 2;
    *(undefined8 **)(param_1 + 8) = puVar1;
    *(ulong *)(param_1 + 0x10) = (long)puVar3 + uVar5;
  } while (uVar2 < param_2);
  *(ulong *)(param_1 + 8) = (long)puVar1 + param_2;
  return puVar1;
}


