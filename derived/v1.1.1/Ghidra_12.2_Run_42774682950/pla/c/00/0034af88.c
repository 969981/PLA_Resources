/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0034af88; name: FUN_0034af88
 */


void FUN_0034af88(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  byte *pbVar2;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_90;
  undefined4 local_88;
  byte *local_60;
  uint local_58;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*(char *)(param_2 + 0x43) == '\0') {
    uVar1 = 0;
  }
  else {
    pbVar2 = *(byte **)(*(long *)(param_2 + 0x50) + 8);
    local_60 = *(byte **)(pbVar2 + 0x10);
    if ((*pbVar2 & 1) == 0) {
      local_60 = pbVar2 + 1;
    }
    local_90 = 0;
    local_88 = 0xffffffff;
    local_c0 = 0;
    local_b8 = 0xffffffff;
    local_f0 = 0;
    local_e8 = 0xffffffff;
    local_120 = 0;
    local_118 = 0xffffffff;
    local_150 = 0;
    local_148 = 0xffffffff;
    local_180 = 0;
    local_178 = 0xffffffff;
    local_1b0 = 0;
    local_1a8 = 0xffffffff;
    local_1e0 = 0;
    local_58 = (uint)(*pbVar2 >> 1);
    if ((*pbVar2 & 1) != 0) {
      local_58 = (uint)*(undefined8 *)(pbVar2 + 8);
    }
    local_1d8 = 0xffffffff;
    local_208 = 0xffffffff;
                    /* try { // try from 0034b030 to 0034b073 has its CatchHandler @ 0034b0c0 */
    local_210 = 0;
    FUN_003c68c0(param_1,"extend .$0 {\n",&local_60,&local_90,&local_c0,&local_f0,&local_120,
                 &local_150,&local_180,&local_1b0,&local_1e0,&local_210);
    uVar1 = 1;
  }
                    /* try { // try from 0034b080 to 0034b0ab has its CatchHandler @ 0034b0d0 */
  FUN_00349a18(param_2,uVar1,param_1,param_3);
  if (*(char *)(param_2 + 0x43) != '\0') {
    FUN_002e4094(param_1,&DAT_03918033,2);
  }
  return;
}


