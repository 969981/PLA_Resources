/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03009710; name: FUN_03009710
 */


void FUN_03009710(undefined2 *param_1)

{
  undefined4 local_14;
  
  *param_1 = 2;
  param_1[0x48] = 0x17;
  *(undefined8 *)(param_1 + 0x4a) = 0x7f7fffee7f7fffee;
  *(undefined4 *)(param_1 + 0x4e) = 0x5f7ffff0;
  param_1[0x50] = 0xc;
  *(undefined8 *)(param_1 + 0x52) = 0xbf800000bf800000;
  param_1[0x58] = 5;
  local_14 = 0x3f800000;
  FUN_03341040(param_1 + 0x59,&local_14);
  *(undefined1 *)((long)param_1 + 0xb3) = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0x3f8000003f800000;
  return;
}


