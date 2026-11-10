/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03009408; name: FUN_03009408
 */


void FUN_03009408(undefined2 *param_1)

{
  undefined4 local_14;
  
  *param_1 = 3;
  param_1[0x18] = 0x17;
  *(undefined8 *)(param_1 + 0x1a) = 0x7f7fffee7f7fffee;
  *(undefined4 *)(param_1 + 0x1e) = 0x5f7ffff0;
  param_1[0x20] = 5;
  local_14 = 0x3f800000;
  FUN_03341040(param_1 + 0x21,&local_14);
  *(undefined1 *)((long)param_1 + 0x43) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0x3f8000003f800000;
  return;
}


