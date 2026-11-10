/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01102b54; name: FUN_01102b54
 */


void FUN_01102b54(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  
  puVar3 = (undefined1 *)param_2[3];
  if (*(undefined1 **)(param_1 + 0x88) == puVar3) {
LAB_01102bac:
    lVar1 = 0;
  }
  else {
    if (*(undefined1 **)(param_1 + 0xd8) == puVar3) {
LAB_01102c14:
      lVar1 = 1;
      goto LAB_01102bb0;
    }
    if (*(undefined1 **)(param_1 + 0x128) == puVar3) {
LAB_01102c24:
      lVar1 = 2;
      goto LAB_01102bb0;
    }
    if (*(undefined1 **)(param_1 + 0x178) == puVar3) {
LAB_01102c34:
      lVar1 = 3;
      goto LAB_01102bb0;
    }
    if (*(undefined1 **)(param_1 + 0x1c8) != puVar3) {
      if (*(undefined1 **)(param_1 + 0x88) == &DAT_cbf29ce484222645) goto LAB_01102bac;
      if (*(undefined1 **)(param_1 + 0xd8) == &DAT_cbf29ce484222645) goto LAB_01102c14;
      if (*(undefined1 **)(param_1 + 0x128) == &DAT_cbf29ce484222645) goto LAB_01102c24;
      if (*(undefined1 **)(param_1 + 0x178) == &DAT_cbf29ce484222645) goto LAB_01102c34;
      if (*(undefined1 **)(param_1 + 0x1c8) != &DAT_cbf29ce484222645) {
        return;
      }
    }
    lVar1 = 4;
  }
LAB_01102bb0:
  param_1 = param_1 + lVar1 * 0x50;
  uVar2 = param_2[9];
  *(undefined8 *)(param_1 + 0xa8) = param_2[7];
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  uVar2 = param_2[5];
  *(undefined8 *)(param_1 + 0x88) = param_2[3];
  *(undefined8 *)(param_1 + 0x98) = uVar2;
  *(undefined8 *)(param_1 + 0x78) = param_2[1];
  *(undefined8 *)(param_1 + 0x70) = *param_2;
  uVar2 = param_2[2];
  *(undefined8 *)(param_1 + 0x90) = param_2[4];
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  uVar2 = param_2[6];
  *(undefined8 *)(param_1 + 0xb0) = param_2[8];
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  return;
}


