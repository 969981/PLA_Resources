/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0325e39c; name: FUN_0325e39c
 */


void FUN_0325e39c(undefined8 *param_1)

{
  FUN_031f127c();
  param_1[0xe] = 0;
  param_1[0xf] = 0x8000000000000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0x8000000000000000;
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined8 *)((long)param_1 + 0x94) = 0x3ecccccd00000000;
  *(undefined4 *)((long)param_1 + 0x9c) = 0x3ba3d70a;
  param_1[0x14] = 0x10101013c23d70a;
  *param_1 = &PTR_LAB_0430af38;
  *(undefined1 *)(param_1 + 0x15) = 1;
  param_1[0xb] = 0x7f7fffee7f7fffee;
  param_1[10] = 0x7f7fffee7f7fffee;
  param_1[0xd] = 0xff7fffeeff7fffee;
  param_1[0xc] = 0xff7fffeeff7fffee;
  return;
}


