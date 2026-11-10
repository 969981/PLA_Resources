/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053f520; name: FUN_0053f520
 */


undefined8 * FUN_0053f520(long param_1,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((param_2 & 0xfffffffffffffff8) < 0x48) {
    if (param_3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    puVar4 = (undefined8 *)(*(code *)*param_3)(param_3,0,0,0x158);
    uVar2 = DAT_0388a628;
    puVar3 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[0x29] = puVar4;
      puVar4[0x2a] = puVar4;
      puVar3 = puVar4 + 0x22;
      puVar4[0x28] = puVar3;
      puVar4[0x24] = puVar3;
      puVar4[1] = uVar2;
      uVar2 = DAT_0388a8b0;
      puVar4[0x22] = &LAB_0053f410;
      puVar4[0x23] = puVar4 + 2;
      puVar4[0x27] = uVar2;
      puVar4[0x25] = (long)puVar4 + 0xc;
      puVar4[0x26] = param_3;
      return puVar3;
    }
  }
  else {
    lVar1 = (param_2 & 0xfffffffffffffff8) + param_1;
    puVar3 = (undefined8 *)(lVar1 + -0x48);
    *puVar3 = &LAB_0053f410;
    *(undefined8 *)(lVar1 + -0x20) = DAT_0388a850;
    *(undefined8 *)(lVar1 + -0x30) = 0;
    *(undefined8 **)(lVar1 + -0x28) = param_3;
    *(long *)(lVar1 + -0x40) = param_1;
    *(undefined8 **)(lVar1 + -0x38) = puVar3;
    *(undefined8 **)(lVar1 + -0x18) = puVar3;
    *(undefined8 *)(lVar1 + -0x10) = 0;
  }
  return puVar3;
}


