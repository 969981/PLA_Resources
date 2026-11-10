/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e52200; name: FUN_02e52200
 */


void FUN_02e52200(float param_1,long *param_2,long param_3,undefined8 param_4,undefined8 *param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 undefined4 param_10,uint param_11)

{
  long lVar1;
  long lVar2;
  long local_a0;
  undefined4 local_98;
  ulong local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  
  lVar2 = FUN_02e52664(param_3);
  if (lVar2 != 0) {
    FUN_02eeffc8(lVar2,param_7,param_10,2);
    FUN_02ef127c(lVar2,param_4,param_8,param_9,param_10);
    FUN_02ef1254(lVar2,param_4,param_6,param_10);
    if (0.0 < *(float *)((long)param_2 + 0x74)) {
      lVar1 = -4;
      if (param_2[8] != -1) {
        lVar1 = param_2[8];
      }
      FUN_02ef1254(lVar2,lVar1,param_6,param_10);
    }
  }
  if ((2 < *(uint *)(param_3 + 0x40)) &&
     (lVar2 = *(long *)(*(long *)(param_3 + 0x38) + 0x10), lVar2 != 0)) {
    local_88 = *param_5;
    local_80 = *(undefined4 *)(param_5 + 1);
    local_a0 = *param_2;
    local_98 = (undefined4)param_2[1];
    local_94 = *(ulong *)((long)param_2 + 0xc);
    local_8c = *(undefined4 *)((long)param_2 + 0x14);
    *(undefined1 *)(lVar2 + 0x88) = 0;
    FUN_02e71be0(lVar2,&local_a0);
  }
  if ((param_11 & 1) != 0) {
    local_88 = CONCAT71(local_88._1_7_,0xff);
    local_80 = CONCAT31(local_80._1_3_,0xff);
    local_94 = local_94 & 0xffffffff;
    local_98 = 0;
    local_78 = 0;
    local_a0 = param_3;
    FUN_02ee399c(param_1 * 100.0,DAT_0440a160,8,&local_a0);
  }
  return;
}


