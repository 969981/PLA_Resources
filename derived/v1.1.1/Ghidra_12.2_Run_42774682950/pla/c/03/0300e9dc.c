/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0300e9dc; name: FUN_0300e9dc
 */


void FUN_0300e9dc(undefined2 *param_1)

{
  undefined4 local_14;
  
  *param_1 = 2;
  param_1[0x48] = 0x17;
  *(undefined8 *)(param_1 + 0x4a) = 0x7f7fffee7f7fffee;
  *(undefined4 *)(param_1 + 0x4e) = 0x5f7ffff0;
  param_1[0x50] = 5;
  local_14 = 0x3f800000;
  FUN_03341040(param_1 + 0x51,&local_14);
  *(undefined1 *)((long)param_1 + 0xa3) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x58] = 0x18;
  *(undefined8 *)(param_1 + 0x5a) = 0x3f8000003f800000;
  return;
}


