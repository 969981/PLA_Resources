/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00203848; name: FUN_00203848
 */


undefined8 FUN_00203848(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  bVar2 = *(byte *)((long)param_2 + 0x79);
  bVar1 = *(byte *)((long)param_1 + 0x79) & 1;
  *(byte *)((long)param_2 + 0x79) = bVar2 & 0xfe | bVar1;
  bVar1 = bVar1 | (*(byte *)((long)param_1 + 0x79) >> 1 & 1) << 1;
  *(byte *)((long)param_2 + 0x79) = bVar2 & 0xfc | bVar1;
  bVar1 = bVar1 | (*(byte *)((long)param_1 + 0x79) >> 2 & 1) << 2;
  *(byte *)((long)param_2 + 0x79) = bVar2 & 0xf8 | bVar1;
  *(byte *)((long)param_2 + 0x79) = bVar2 & 0xf0 | bVar1 | *(byte *)((long)param_1 + 0x79) & 8;
  if (param_1[2] == 0) {
    param_2[2] = 0;
  }
  else {
    lVar3 = FUN_002044f4();
    param_2[2] = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  if (param_1[3] == 0) {
    param_2[3] = 0;
  }
  else {
    lVar3 = FUN_002044f4();
    param_2[3] = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  if (param_1[4] == 0) {
    param_2[4] = 0;
  }
  else {
    lVar3 = FUN_002044f4();
    param_2[4] = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  if (param_1[5] == 0) {
    param_2[5] = 0;
  }
  else {
    lVar3 = FUN_002044f4();
    param_2[5] = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  if (param_1[6] == 0) {
    param_2[6] = 0;
  }
  else {
    lVar3 = FUN_002044f4();
    param_2[6] = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  if (param_1[7] == 0) {
    param_2[7] = 0;
  }
  else {
    lVar3 = FUN_002044f4();
    param_2[7] = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  if (param_1[8] == 0) {
    param_2[8] = 0;
  }
  else {
    lVar3 = FUN_002044f4();
    param_2[8] = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  return 1;
}


