/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018c85ec; name: FUN_018c85ec
 */


void FUN_018c85ec(long *param_1,int param_2,int param_3,int param_4)

{
  ulong uVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  undefined1 *local_158;
  byte *pbStack_150;
  undefined8 local_148;
  long *local_140;
  byte local_138 [256];
  long *local_38;
  
  if ((*param_1 != 0) && (FUN_018c8968(&local_38), local_38 != (long *)0x0)) {
    puVar3 = &DAT_cbf29ce484222645;
    snprintf((char *)local_138,0x100,"WSYS_BANDIT_%01d_AREA%02d",param_2 + 1,param_3 + 1);
    if (local_138[0] != 0) {
      pbVar2 = (byte *)((ulong)local_138 | 1);
      do {
        puVar3 = (undefined1 *)(((ulong)puVar3 ^ (ulong)local_138[0]) * 0x100000001b3);
        local_138[0] = *pbVar2;
        pbVar2 = pbVar2 + 1;
      } while (local_138[0] != 0);
    }
    local_148 = 0xff;
    local_140 = (long *)0x0;
    local_158 = puVar3;
    pbStack_150 = local_138;
    FUN_010f4ab0(local_38,&local_158,param_4 + 1);
    if (local_140 != (long *)0x0) {
      (**(code **)(*local_140 + 0x20))();
    }
    if ((local_38 != (long *)0x0) && (uVar1 = FUN_02a43a5c(local_38[0xb]), (uVar1 & 1) != 0)) {
      (**(code **)(*local_38 + 0x20))(local_38);
    }
  }
  return;
}


