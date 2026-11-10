/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01090e30; name: FUN_01090e30
 */


void FUN_01090e30(int param_1,uint param_2,int param_3,long param_4)

{
  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *local_70;
  byte *pbStack_68;
  size_t local_60;
  long *local_58;
  byte local_50 [32];
  
  if (param_4 != 0) {
    puVar4 = &DAT_cbf29ce484222645;
    snprintf((char *)local_50,0x20,"PLAY_PV_%03d_%02d_%02d",param_1,param_2 & 0xffff,param_3);
    local_60 = strlen((char *)local_50);
    if (local_50[0] != 0) {
      uVar3 = (ulong)(uint)local_50[0];
      pbVar2 = (byte *)((ulong)local_50 | 1);
      do {
        puVar4 = (undefined1 *)(((ulong)puVar4 ^ uVar3) * 0x100000001b3);
        bVar1 = *pbVar2;
        uVar3 = (ulong)bVar1;
        pbVar2 = pbVar2 + 1;
      } while (bVar1 != 0);
    }
    local_58 = (long *)0x0;
    if (local_50[0] != 0) {
      local_70 = puVar4;
      pbStack_68 = local_50;
      FUN_0290b66c(param_4,&local_70,0);
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
    }
  }
  return;
}


