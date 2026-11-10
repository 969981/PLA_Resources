/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e9408; name: FUN_006e9408
 */


void FUN_006e9408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  long local_68;
  long local_60;
  long *local_58;
  byte *local_50;
  byte *local_48;
  long local_40;
  long *local_38;
  
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = (long *)FUN_00612290();
  local_50 = (byte *)0x0;
  local_48 = (byte *)0x0;
  local_40 = 0;
  local_38 = (long *)FUN_00612290();
  local_80 = 0;
  uStack_78 = 0;
  FUN_006e9560(param_1,param_2,param_3,&local_70,&local_80,param_4);
  pbVar5 = local_50;
  if (local_50 != (byte *)0x0) {
    if (local_48 != local_50) {
      bVar1 = local_48[-0x20];
      pbVar6 = local_48 + -0x20;
      pbVar3 = local_48;
      while( true ) {
        pbVar2 = pbVar6;
        if ((bVar1 & 1) != 0) {
          (**(code **)(**(long **)(pbVar3 + -8) + 0x18))
                    (*(long **)(pbVar3 + -8),*(undefined8 *)(pbVar3 + -0x10),
                     *(ulong *)(pbVar3 + -0x20) & 0xfffffffffffffffe,1);
        }
        if (pbVar5 == pbVar2) break;
        bVar1 = pbVar2[-0x20];
        pbVar6 = pbVar2 + -0x20;
        pbVar3 = pbVar2;
      }
    }
    local_48 = pbVar5;
    (**(code **)(*local_38 + 0x18))(local_38,local_50,local_40 - (long)local_50,8);
  }
  lVar4 = local_70;
  if (local_70 != 0) {
    if (local_68 != local_70) {
      lVar7 = local_68;
      do {
        lVar7 = lVar7 + -0x88;
        FUN_006f5858(&local_58,lVar7);
      } while (lVar4 != lVar7);
    }
    local_68 = lVar4;
    (**(code **)(*local_58 + 0x18))(local_58,local_70,local_60 - local_70,8);
  }
  return;
}


