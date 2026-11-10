/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030075d4; name: FUN_030075d4
 */


void FUN_030075d4(undefined2 *param_1)

{
  undefined4 local_24;
  
  *param_1 = 2;
  param_1[0x48] = 0x17;
  *(undefined8 *)(param_1 + 0x4a) = 0x7f7fffee7f7fffee;
  *(undefined4 *)(param_1 + 0x4e) = 0x5f7ffff0;
  param_1[0x50] = 0x12;
  *(undefined1 *)(param_1 + 0x51) = 1;
  *(undefined1 *)(param_1 + 0x61) = 1;
  *(undefined1 *)(param_1 + 0x62) = 1;
  *(undefined1 *)(param_1 + 0x69) = 1;
  *(undefined4 *)(param_1 + 0x52) = 0xffffffff;
  param_1[0x5a] = 0xffff;
  param_1[0x78] = 0xc;
  param_1[0x60] = 0x11;
  *(undefined8 *)(param_1 + 0x7a) = 0xbf800000bf800000;
  *(undefined8 *)(param_1 + 0x54) = 0;
  param_1[0x68] = 0xe;
  *(undefined8 *)(param_1 + 0x70) = 0x3f8000003f800000;
  param_1[0x80] = 5;
  local_24 = 0x3f800000;
  FUN_03341040(param_1 + 0x81,&local_24);
  *(undefined1 *)((long)param_1 + 0x103) = 0;
  *(undefined8 *)(param_1 + 0x82) = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0x86) = 0;
  return;
}


