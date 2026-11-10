/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed4eb4; name: FUN_02ed4eb4
 */


void FUN_02ed4eb4(long *param_1,int param_2)

{
  uint uVar1;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ushort local_34;
  
  if (param_1 != (long *)0x0) {
    if (0 < param_2 * 0x10000) {
      uVar1 = 0;
      do {
        (**(code **)(*param_1 + 0x138))(param_1,1);
        uVar1 = uVar1 + 1;
      } while ((int)(uVar1 & 0xffff) < (int)(short)param_2);
    }
    local_38 = 1;
    local_50[0] = 0;
    local_34 = 0x100;
    local_48 = 0;
    uStack_40 = 0;
    if (0xffff < param_2) {
      uVar1 = 0;
      do {
        local_34 = local_34 & 0xff00;
        (**(code **)(*param_1 + 0x128))(param_1,local_50);
        uVar1 = uVar1 + 1;
      } while ((int)(uVar1 & 0xffff) < param_2 >> 0x10);
    }
  }
  return;
}


