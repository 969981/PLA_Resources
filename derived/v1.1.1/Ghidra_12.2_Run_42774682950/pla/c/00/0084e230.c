/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084e230; name: FUN_0084e230
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0084e230(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined4 param_5
                 ,undefined8 param_6)

{
  long lVar1;
  undefined1 auStack_60 [8];
  undefined4 local_58 [4];
  uint local_48 [2];
  undefined4 local_38 [2];
  
  memset(local_48,0,4);
  if (*(long *)(param_2 + 0x3f8) == param_3) {
    local_48[0] = local_48[0] | 1;
    lVar1 = *(long *)(param_2 + 0x400);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x400);
  }
  if (lVar1 == param_3) {
    local_48[0] = local_48[0] | 2;
    lVar1 = *(long *)(param_2 + 0x408);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x408);
  }
  if (lVar1 == param_3) {
    local_48[0] = local_48[0] | 4;
    lVar1 = *(long *)(param_2 + 0x410);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x410);
  }
  if (lVar1 == param_3) {
    local_48[0] = local_48[0] | 8;
    lVar1 = *(long *)(param_2 + 0x418);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x418);
  }
  if (lVar1 == param_3) {
    local_48[0] = local_48[0] | 0x10;
    lVar1 = *(long *)(param_2 + 0x420);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x420);
  }
  if (lVar1 == param_3) {
    local_48[0] = local_48[0] | 0x20;
    lVar1 = *(long *)(param_2 + 0x428);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x428);
  }
  if (lVar1 == param_3) {
    local_48[0] = local_48[0] | 0x40;
    lVar1 = *(long *)(param_2 + 0x430);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x430);
  }
  if (lVar1 == param_3) {
    local_48[0] = local_48[0] | 0x80;
    lVar1 = *(long *)(param_2 + 0x438);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x438);
  }
  if (lVar1 == param_3) {
    local_48[0] = local_48[0] | 0x100;
    lVar1 = *(long *)(param_2 + 0x440);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x440);
  }
  if (lVar1 == param_3) {
    local_48[0] = local_48[0] | 0x200;
    lVar1 = *(long *)(param_2 + 0x448);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x448);
  }
  if (lVar1 == param_3) {
    local_48[0] = local_48[0] | 0x400;
    lVar1 = *(long *)(param_2 + 0x450);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x450);
  }
  if (lVar1 == param_3) {
    local_48[0] = local_48[0] | 0x800;
    lVar1 = *(long *)(param_2 + 0x458);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x458);
  }
  if (lVar1 == param_3) {
    local_48[0] = local_48[0] | 0x1000;
    lVar1 = *(long *)(param_2 + 0x460);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x460);
  }
  if (lVar1 == param_3) {
    local_48[0] = local_48[0] | 0x2000;
    lVar1 = *(long *)(param_2 + 0x468);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x468);
  }
  if (lVar1 == param_3) {
    local_48[0] = local_48[0] | 0x4000;
    lVar1 = *(long *)(param_2 + 0x470);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x470);
  }
  if (lVar1 == param_3) {
    local_48[0] = local_48[0] | 0x8000;
    lVar1 = *(long *)(param_2 + 0x478);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x478);
  }
  if (lVar1 == param_3) {
    local_48[0] = local_48[0] | 0x10000;
    lVar1 = *(long *)(param_2 + 0x480);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x480);
  }
  if (lVar1 == param_3) {
    local_48[0] = local_48[0] | 0x20000;
    lVar1 = *(long *)(param_2 + 0x488);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x488);
  }
  if (lVar1 == param_3) {
    local_48[0] = local_48[0] | 0x40000;
    lVar1 = *(long *)(param_2 + 0x490);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x490);
  }
  if (lVar1 == param_3) {
    local_48[0] = local_48[0] | 0x80000;
    lVar1 = *(long *)(param_2 + 0x498);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x498);
  }
  if (lVar1 == param_3) {
    local_48[0] = local_48[0] | 0x100000;
    lVar1 = *(long *)(param_2 + 0x4a0);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x4a0);
  }
  if (lVar1 == param_3) {
    local_48[0] = local_48[0] | 0x200000;
    lVar1 = *(long *)(param_2 + 0x4a8);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x4a8);
  }
  if (lVar1 == param_3) {
    local_48[0] = local_48[0] | 0x400000;
    lVar1 = *(long *)(param_2 + 0x4b0);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x4b0);
  }
  if (lVar1 == param_3) {
    local_48[0] = local_48[0] | 0x800000;
  }
  else if (local_48[0] == 0) {
    local_58[0] = 0x10407;
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
    FUN_007ee578(param_1,local_58);
    return;
  }
  memcpy(auStack_60,local_48,4);
  FUN_0084de14(param_1,param_2,auStack_60,param_4,param_5,param_6);
  return;
}


