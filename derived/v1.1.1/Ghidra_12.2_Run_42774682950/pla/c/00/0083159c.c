/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083159c; name: FUN_0083159c
 */


void FUN_0083159c(undefined8 param_1,long *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  lVar2 = param_2[2];
  if (lVar2 == 0) {
    local_30[0] = 0x10408;
    goto LAB_00831668;
  }
  puVar1 = *(undefined8 **)(lVar2 + 0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_30[0] = 0xc10;
    goto LAB_00831668;
  }
  lVar3 = puVar1[4];
  *(long *)(lVar2 + 0x18) = lVar3;
  if (lVar3 == 0) {
    *(undefined8 *)(lVar2 + 0x20) = 0;
  }
  lVar4 = puVar1[5];
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x20) = lVar3;
  }
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x28) = lVar4;
  }
  lVar3 = *(long *)(lVar2 + 0x10);
  if (*(long *)(lVar2 + 8) == 0) {
    if (lVar3 == 0) {
      puVar1[2] = 0;
      puVar1[3] = 0;
      *(undefined8 **)(lVar2 + 8) = puVar1;
      goto LAB_00831620;
    }
  }
  else if (lVar3 != 0) {
    *(undefined8 **)(lVar3 + 0x10) = puVar1;
    puVar1[2] = 0;
    puVar1[3] = lVar3;
LAB_00831620:
    *(undefined8 **)(lVar2 + 0x10) = puVar1;
  }
  *puVar1 = *param_3;
  *(undefined1 *)(puVar1 + 1) = *param_4;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    *param_2 = (long)puVar1;
    param_2[1] = (long)puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  else {
    do {
      lVar2 = *(long *)(lVar2 + 0x30);
    } while (lVar2 != 0);
    lVar2 = param_2[1];
    *(undefined8 **)(lVar2 + 0x30) = puVar1;
    puVar1[6] = 0;
    puVar1[7] = lVar2;
    param_2[1] = (long)puVar1;
  }
  local_30[0] = 0;
LAB_00831668:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


