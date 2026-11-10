/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec7db4; name: FUN_02ec7db4
 */


void FUN_02ec7db4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,byte param_4,
                 byte param_5)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 7) = 1;
  param_1[2] = param_3;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *param_1 = &PTR_FUN_042aa108;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  uVar1 = param_2[1];
  param_1[0xb] = *param_2;
  param_1[0xc] = uVar1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x11),true,0);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x17),true,0);
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1b] = &PTR_FUN_042a9648;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0xff;
  *(undefined1 *)(param_1 + 0x22) = 0xff;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)((long)param_1 + 0x164) = 0;
  *(byte *)((long)param_1 + 0x165) = param_4 & 1;
  *(undefined1 *)((long)param_1 + 0x166) = 0;
  *(byte *)((long)param_1 + 0x167) = param_5 & 1;
  param_1[0x27] = 0;
  param_1[0x28] = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0x2c) = 2;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = *(undefined4 *)(param_2 + 1);
  return;
}


