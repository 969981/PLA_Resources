/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00853554; name: FUN_00853554
 */


void FUN_00853554(undefined8 param_1,long param_2,long param_3,uint param_4,uint param_5)

{
  ulong uVar1;
  int *piVar2;
  int local_58 [4];
  int local_48 [4];
  undefined4 local_38 [2];
  
  FUN_00853988(local_48);
  if (local_48[0] == 0) {
    if ((((param_3 == 0) || (param_4 == 0)) || (*(uint *)(param_2 + 0xac) < param_4)) ||
       (((~param_5 & 0xff) == 0 || (uVar1 = FUN_008519b0(param_2,param_5), (uVar1 & 1) == 0)))) {
      local_58[0] = 0x10407;
    }
    else {
      if ((*(byte *)(param_2 + 0x94) != 0xff) &&
         ((uint)*(byte *)(param_2 + 0x94) != (param_5 & 0xff))) {
        *(undefined1 *)(param_2 + 0xcb) = 1;
        *(undefined1 *)(param_2 + 0x94) = 0xff;
      }
      if ((*(byte *)(param_2 + 0x95) != 0xff) &&
         ((uint)*(byte *)(param_2 + 0x95) != (param_5 & 0xff))) {
        *(undefined1 *)(param_2 + 0xcc) = 1;
        *(undefined1 *)(param_2 + 0x95) = 0xff;
      }
      if ((*(byte *)(param_2 + 0x96) != 0xff) &&
         ((uint)*(byte *)(param_2 + 0x96) != (param_5 & 0xff))) {
        *(undefined1 *)(param_2 + 0xcd) = 1;
        *(undefined1 *)(param_2 + 0x96) = 0xff;
      }
      if ((*(byte *)(param_2 + 0x97) != 0xff) &&
         ((uint)*(byte *)(param_2 + 0x97) != (param_5 & 0xff))) {
        *(undefined1 *)(param_2 + 0xce) = 1;
        *(undefined1 *)(param_2 + 0x97) = 0xff;
      }
      if ((*(byte *)(param_2 + 0x98) != 0xff) &&
         ((uint)*(byte *)(param_2 + 0x98) != (param_5 & 0xff))) {
        *(undefined1 *)(param_2 + 0xcf) = 1;
        *(undefined1 *)(param_2 + 0x98) = 0xff;
      }
      if ((*(byte *)(param_2 + 0x99) != 0xff) &&
         ((uint)*(byte *)(param_2 + 0x99) != (param_5 & 0xff))) {
        *(undefined1 *)(param_2 + 0xd0) = 1;
        *(undefined1 *)(param_2 + 0x99) = 0xff;
      }
      if ((*(byte *)(param_2 + 0x9a) != 0xff) &&
         ((uint)*(byte *)(param_2 + 0x9a) != (param_5 & 0xff))) {
        *(undefined1 *)(param_2 + 0xd1) = 1;
        *(undefined1 *)(param_2 + 0x9a) = 0xff;
      }
      if ((*(byte *)(param_2 + 0x9b) != 0xff) &&
         ((uint)*(byte *)(param_2 + 0x9b) != (param_5 & 0xff))) {
        *(undefined1 *)(param_2 + 0xd2) = 1;
        *(undefined1 *)(param_2 + 0x9b) = 0xff;
      }
      if ((*(byte *)(param_2 + 0x9c) != 0xff) &&
         ((uint)*(byte *)(param_2 + 0x9c) != (param_5 & 0xff))) {
        *(undefined1 *)(param_2 + 0xd3) = 1;
        *(undefined1 *)(param_2 + 0x9c) = 0xff;
      }
      if ((*(byte *)(param_2 + 0x9d) != 0xff) &&
         ((uint)*(byte *)(param_2 + 0x9d) != (param_5 & 0xff))) {
        *(undefined1 *)(param_2 + 0xd4) = 1;
        *(undefined1 *)(param_2 + 0x9d) = 0xff;
      }
      if ((*(byte *)(param_2 + 0x9e) != 0xff) &&
         ((uint)*(byte *)(param_2 + 0x9e) != (param_5 & 0xff))) {
        *(undefined1 *)(param_2 + 0xd5) = 1;
        *(undefined1 *)(param_2 + 0x9e) = 0xff;
      }
      if ((*(byte *)(param_2 + 0x9f) != 0xff) &&
         ((uint)*(byte *)(param_2 + 0x9f) != (param_5 & 0xff))) {
        *(undefined1 *)(param_2 + 0xd6) = 1;
        *(undefined1 *)(param_2 + 0x9f) = 0xff;
      }
      if ((*(byte *)(param_2 + 0xa0) != 0xff) &&
         ((uint)*(byte *)(param_2 + 0xa0) != (param_5 & 0xff))) {
        *(undefined1 *)(param_2 + 0xd7) = 1;
        *(undefined1 *)(param_2 + 0xa0) = 0xff;
      }
      if ((*(byte *)(param_2 + 0xa1) != 0xff) &&
         ((uint)*(byte *)(param_2 + 0xa1) != (param_5 & 0xff))) {
        *(undefined1 *)(param_2 + 0xd8) = 1;
        *(undefined1 *)(param_2 + 0xa1) = 0xff;
      }
      if ((*(byte *)(param_2 + 0xa2) != 0xff) &&
         ((uint)*(byte *)(param_2 + 0xa2) != (param_5 & 0xff))) {
        *(undefined1 *)(param_2 + 0xd9) = 1;
        *(undefined1 *)(param_2 + 0xa2) = 0xff;
      }
      if ((*(byte *)(param_2 + 0xa3) != 0xff) &&
         ((uint)*(byte *)(param_2 + 0xa3) != (param_5 & 0xff))) {
        *(undefined1 *)(param_2 + 0xda) = 1;
        *(undefined1 *)(param_2 + 0xa3) = 0xff;
      }
      if ((*(byte *)(param_2 + 0xa4) != 0xff) &&
         ((uint)*(byte *)(param_2 + 0xa4) != (param_5 & 0xff))) {
        *(undefined1 *)(param_2 + 0xdb) = 1;
        *(undefined1 *)(param_2 + 0xa4) = 0xff;
      }
      if ((*(byte *)(param_2 + 0xa5) != 0xff) &&
         ((uint)*(byte *)(param_2 + 0xa5) != (param_5 & 0xff))) {
        *(undefined1 *)(param_2 + 0xdc) = 1;
        *(undefined1 *)(param_2 + 0xa5) = 0xff;
      }
      if ((*(byte *)(param_2 + 0xa6) != 0xff) &&
         ((uint)*(byte *)(param_2 + 0xa6) != (param_5 & 0xff))) {
        *(undefined1 *)(param_2 + 0xdd) = 1;
        *(undefined1 *)(param_2 + 0xa6) = 0xff;
      }
      if ((*(byte *)(param_2 + 0xa7) != 0xff) &&
         ((uint)*(byte *)(param_2 + 0xa7) != (param_5 & 0xff))) {
        *(undefined1 *)(param_2 + 0xde) = 1;
        *(undefined1 *)(param_2 + 0xa7) = 0xff;
      }
      if ((*(byte *)(param_2 + 0xa8) != 0xff) &&
         ((uint)*(byte *)(param_2 + 0xa8) != (param_5 & 0xff))) {
        *(undefined1 *)(param_2 + 0xdf) = 1;
        *(undefined1 *)(param_2 + 0xa8) = 0xff;
      }
      if ((*(byte *)(param_2 + 0xa9) != 0xff) &&
         ((uint)*(byte *)(param_2 + 0xa9) != (param_5 & 0xff))) {
        *(undefined1 *)(param_2 + 0xe0) = 1;
        *(undefined1 *)(param_2 + 0xa9) = 0xff;
      }
      if ((*(byte *)(param_2 + 0xaa) != 0xff) &&
         ((uint)*(byte *)(param_2 + 0xaa) != (param_5 & 0xff))) {
        *(undefined1 *)(param_2 + 0xe1) = 1;
        *(undefined1 *)(param_2 + 0xaa) = 0xff;
      }
      if ((*(byte *)(param_2 + 0xab) != 0xff) &&
         ((uint)*(byte *)(param_2 + 0xab) != (param_5 & 0xff))) {
        *(undefined1 *)(param_2 + 0xe2) = 1;
        *(undefined1 *)(param_2 + 0xab) = 0xff;
      }
      *(long *)(param_2 + 0x80) = param_3;
      *(uint *)(param_2 + 0x90) = param_4;
      *(undefined4 *)(param_2 + 0x78) = 1;
      *(char *)(param_2 + 0xb0) = (char)param_5;
      *(undefined4 *)(param_2 + 0xb4) = 0;
      *(undefined2 *)(param_2 + 200) = 0;
      *(undefined1 *)(param_2 + 0xca) = 0;
      local_58[0] = 0;
    }
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
    piVar2 = local_58;
  }
  else {
    piVar2 = local_48;
  }
  FUN_007ee578(param_1,piVar2);
  return;
}


