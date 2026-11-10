/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00828fb8; name: FUN_00828fb8
 */


void FUN_00828fb8(undefined8 param_1,long *param_2,undefined2 *param_3,undefined8 *param_4)

{
  undefined2 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  lVar2 = param_2[2];
  if (lVar2 == 0) {
    local_30[0] = 0x10408;
    goto LAB_00829084;
  }
  puVar1 = *(undefined2 **)(lVar2 + 0x18);
  if (puVar1 == (undefined2 *)0x0) {
    local_30[0] = 0xc10;
    goto LAB_00829084;
  }
  lVar3 = *(long *)(puVar1 + 0x10);
  *(long *)(lVar2 + 0x18) = lVar3;
  if (lVar3 == 0) {
    *(undefined8 *)(lVar2 + 0x20) = 0;
  }
  lVar4 = *(long *)(puVar1 + 0x14);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x20) = lVar3;
  }
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x28) = lVar4;
  }
  lVar3 = *(long *)(lVar2 + 0x10);
  if (*(long *)(lVar2 + 8) == 0) {
    if (lVar3 == 0) {
      *(undefined8 *)(puVar1 + 8) = 0;
      *(undefined8 *)(puVar1 + 0xc) = 0;
      *(undefined2 **)(lVar2 + 8) = puVar1;
      goto LAB_0082903c;
    }
  }
  else if (lVar3 != 0) {
    *(undefined2 **)(lVar3 + 0x10) = puVar1;
    *(undefined8 *)(puVar1 + 8) = 0;
    *(long *)(puVar1 + 0xc) = lVar3;
LAB_0082903c:
    *(undefined2 **)(lVar2 + 0x10) = puVar1;
  }
  *puVar1 = *param_3;
  *(undefined8 *)(puVar1 + 4) = *param_4;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    *param_2 = (long)puVar1;
    param_2[1] = (long)puVar1;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)(puVar1 + 0x1c) = 0;
  }
  else {
    do {
      lVar2 = *(long *)(lVar2 + 0x30);
    } while (lVar2 != 0);
    lVar2 = param_2[1];
    *(undefined2 **)(lVar2 + 0x30) = puVar1;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    *(long *)(puVar1 + 0x1c) = lVar2;
    param_2[1] = (long)puVar1;
  }
  local_30[0] = 0;
LAB_00829084:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


