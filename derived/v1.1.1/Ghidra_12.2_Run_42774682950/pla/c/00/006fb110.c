/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006fb110; name: FUN_006fb110
 */


void FUN_006fb110(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  byte *pbVar2;
  undefined8 local_68;
  byte *local_60;
  long lStack_58;
  byte *local_40;
  long lStack_38;
  
  param_1[1] = 0;
  uVar1 = FUN_00612290();
  param_1[2] = uVar1;
  param_1[3] = 0;
  *param_1 = param_1 + 1;
  lStack_38 = *(long *)(param_2 + 0x20);
                    /* try { // try from 006fb144 to 006fb14b has its CatchHandler @ 006fb1bc */
  FUN_006fb578(&local_40,*(undefined8 *)(lStack_38 + 0x18));
  lStack_58 = lStack_38;
  local_60 = local_40;
  while (local_60 != (byte *)0x0) {
    pbVar2 = *(byte **)(local_60 + 8);
    if ((*pbVar2 & 1) == 0) {
      local_40 = pbVar2 + 1;
    }
    else {
      local_40 = *(byte **)(pbVar2 + 0x10);
    }
    local_68 = FUN_006ddf60(pbVar2 + 0x18);
                    /* try { // try from 006fb18c to 006fb19b has its CatchHandler @ 006fb1c4 */
    FUN_006fbc88(param_1,&local_40,&local_68);
                    /* try { // try from 006fb19c to 006fb1a3 has its CatchHandler @ 006fb1c0 */
    FUN_006fb6e8(&local_60);
  }
  return;
}


