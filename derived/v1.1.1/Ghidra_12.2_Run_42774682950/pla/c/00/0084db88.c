/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084db88; name: FUN_0084db88
 */


void FUN_0084db88(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined1 auStack_58 [8];
  undefined4 local_50 [4];
  uint local_40 [2];
  undefined4 local_38 [2];
  
  memset(local_40,0,4);
  if (*(long *)(param_2 + 0x3f8) != 0) {
    local_40[0] = local_40[0] | 1;
  }
  if (*(long *)(param_2 + 0x400) != 0) {
    local_40[0] = local_40[0] | 2;
  }
  if (*(long *)(param_2 + 0x408) != 0) {
    local_40[0] = local_40[0] | 4;
  }
  if (*(long *)(param_2 + 0x410) != 0) {
    local_40[0] = local_40[0] | 8;
  }
  if (*(long *)(param_2 + 0x418) != 0) {
    local_40[0] = local_40[0] | 0x10;
  }
  if (*(long *)(param_2 + 0x420) != 0) {
    local_40[0] = local_40[0] | 0x20;
  }
  if (*(long *)(param_2 + 0x428) != 0) {
    local_40[0] = local_40[0] | 0x40;
  }
  if (*(long *)(param_2 + 0x430) != 0) {
    local_40[0] = local_40[0] | 0x80;
  }
  if (*(long *)(param_2 + 0x438) != 0) {
    local_40[0] = local_40[0] | 0x100;
  }
  if (*(long *)(param_2 + 0x440) != 0) {
    local_40[0] = local_40[0] | 0x200;
  }
  if (*(long *)(param_2 + 0x448) != 0) {
    local_40[0] = local_40[0] | 0x400;
  }
  if (*(long *)(param_2 + 0x450) != 0) {
    local_40[0] = local_40[0] | 0x800;
  }
  if (*(long *)(param_2 + 0x458) != 0) {
    local_40[0] = local_40[0] | 0x1000;
  }
  if (*(long *)(param_2 + 0x460) != 0) {
    local_40[0] = local_40[0] | 0x2000;
  }
  if (*(long *)(param_2 + 0x468) != 0) {
    local_40[0] = local_40[0] | 0x4000;
  }
  if (*(long *)(param_2 + 0x470) != 0) {
    local_40[0] = local_40[0] | 0x8000;
  }
  if (*(long *)(param_2 + 0x478) != 0) {
    local_40[0] = local_40[0] | 0x10000;
  }
  if (*(long *)(param_2 + 0x480) != 0) {
    local_40[0] = local_40[0] | 0x20000;
  }
  if (*(long *)(param_2 + 0x488) != 0) {
    local_40[0] = local_40[0] | 0x40000;
  }
  if (*(long *)(param_2 + 0x490) != 0) {
    local_40[0] = local_40[0] | 0x80000;
  }
  if (*(long *)(param_2 + 0x498) != 0) {
    local_40[0] = local_40[0] | 0x100000;
  }
  if (*(long *)(param_2 + 0x4a0) != 0) {
    local_40[0] = local_40[0] | 0x200000;
  }
  if (*(long *)(param_2 + 0x4a8) != 0) {
    local_40[0] = local_40[0] | 0x400000;
  }
  if (*(long *)(param_2 + 0x4b0) == 0) {
    if (local_40[0] == 0) {
      local_50[0] = 0x10408;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_38);
      FUN_007ee578(param_1,local_50);
      return;
    }
  }
  else {
    local_40[0] = local_40[0] | 0x800000;
  }
  memcpy(auStack_58,local_40,4);
  FUN_0084de14(param_1,param_2,auStack_58,param_3,param_4,param_5);
  return;
}


