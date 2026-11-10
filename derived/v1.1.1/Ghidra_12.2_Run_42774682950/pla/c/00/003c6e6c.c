/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c6e6c; name: FUN_003c6e6c
 */


void FUN_003c6e6c(undefined4 *param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
                    /* try { // try from 003c6eb0 to 003c6eb7 has its CatchHandler @ 003c715c */
  (**(code **)(**(long **)PTR_DAT_04373140 + 0x70))(*(long **)PTR_DAT_04373140,param_1 + 6);
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
                    /* try { // try from 003c6ec0 to 003c6ec7 has its CatchHandler @ 003c7138 */
  auVar1 = FUN_002eefd0(1);
  *(undefined1 (*) [16])(param_1 + 0x12) = auVar1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 **)(param_1 + 0x26) = param_1 + 0x28;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined4 **)(param_1 + 0x34) = param_1 + 0x36;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined4 **)(param_1 + 0x42) = param_1 + 0x44;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0xffff;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  param_1[0x56] = 4;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x181) = 0;
  *(undefined8 *)((long)param_1 + 0x179) = 0;
                    /* try { // try from 003c6f70 to 003c6f77 has its CatchHandler @ 003c6f98 */
  (**(code **)(*DAT_0439a678 + 0x10))(DAT_0439a678,param_1);
  return;
}


