/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f0baf4; name: FUN_01f0baf4
 */


void FUN_01f0baf4(char *param_1,char *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (*param_1 == '\0') {
    if (*param_2 != '\0') {
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      param_2[0x20] = '\0';
      param_2[0x21] = '\0';
      param_2[0x22] = '\0';
      param_2[0x23] = '\0';
      param_2[0x24] = '\0';
      param_2[0x25] = '\0';
      param_2[0x26] = '\0';
      param_2[0x27] = '\0';
      *(undefined8 *)(param_1 + 0x20) = uVar2;
      *param_1 = '\x01';
    }
  }
  else {
    if (*param_2 != '\0') {
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      plVar1 = *(long **)(param_1 + 0x20);
      param_1[0x20] = '\0';
      param_1[0x21] = '\0';
      param_1[0x22] = '\0';
      param_1[0x23] = '\0';
      param_1[0x24] = '\0';
      param_1[0x25] = '\0';
      param_1[0x26] = '\0';
      param_1[0x27] = '\0';
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x20))();
      }
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      param_2[0x20] = '\0';
      param_2[0x21] = '\0';
      param_2[0x22] = '\0';
      param_2[0x23] = '\0';
      param_2[0x24] = '\0';
      param_2[0x25] = '\0';
      param_2[0x26] = '\0';
      param_2[0x27] = '\0';
      *(undefined8 *)(param_1 + 0x20) = uVar2;
      return;
    }
    if (*(long **)(param_1 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
    }
    *param_1 = '\0';
  }
  return;
}


