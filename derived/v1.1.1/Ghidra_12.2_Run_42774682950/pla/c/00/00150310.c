/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00150310; name: FUN_00150310
 */


uint FUN_00150310(long param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 != -0xf4628) {
        plVar2 = (long *)**(long **)(param_1 + 0x20);
        if ((int)plVar2[1] == 0x16) {
          return 0xffffffff;
        }
        lVar3 = *plVar2;
        if ((int)(uint)*(byte *)(lVar3 + 10) < -param_2 + -0xf4628) {
          return 0xffffffff;
        }
        puVar1 = (undefined8 *)(lVar3 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
        if (puVar1 == &DAT_039c5c28) {
          return 0xffffffff;
        }
        goto LAB_0015036c;
      }
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    puVar1 = (undefined8 *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
    if (*(undefined8 **)(param_1 + 0x10) <= puVar1) {
      return 0xffffffff;
    }
  }
  if (puVar1 == &DAT_039c5c28) {
    return 0xffffffff;
  }
LAB_0015036c:
  return *(uint *)(puVar1 + 1) & 0xf;
}


