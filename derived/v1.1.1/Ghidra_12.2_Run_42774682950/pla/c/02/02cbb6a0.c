/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cbb6a0; name: FUN_02cbb6a0
 */


/* WARNING: Removing unreachable block (ram,0x02cbb7e8) */
/* WARNING: Removing unreachable block (ram,0x02cbb7ec) */
/* WARNING: Removing unreachable block (ram,0x02cbb7f4) */
/* WARNING: Removing unreachable block (ram,0x02cbb7fc) */
/* WARNING: Removing unreachable block (ram,0x02cbb800) */

void FUN_02cbb6a0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined **local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined **local_370;
  undefined8 uStack_368;
  undefined4 local_360;
  undefined **local_358;
  undefined1 *puStack_350;
  undefined4 local_348;
  undefined8 local_344;
  undefined **local_338;
  undefined1 auStack_330 [264];
  undefined **local_228;
  undefined1 *puStack_220;
  undefined4 local_218;
  undefined8 local_214;
  undefined **local_208;
  undefined1 auStack_200 [264];
  undefined **local_f8;
  undefined8 *local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  long local_78;
  long *local_70;
  
  if ((DAT_04408a30 == (long *)0x0) || (lVar4 = *param_4, lVar4 == 0)) {
    local_370 = (undefined **)CONCAT44(local_370._4_4_,0x10408);
    local_390 = (undefined **)((ulong)local_390 & 0xffffffff00000000);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_370 | 4),(Result *)&local_390);
    FUN_007ee578(param_1,&local_370);
  }
  else {
    local_360 = 30000;
    puStack_350 = auStack_330;
    local_358 = &PTR_LAB_042961a0;
    local_338 = &PTR_LAB_042961f8;
    local_228 = &PTR_LAB_042961a0;
    local_f8 = &PTR_LAB_04296230;
    local_d8 = &PTR_LAB_04296288;
    local_f0 = &local_d0;
    local_348 = 0x100;
    local_208 = &PTR_LAB_042961f8;
    local_218 = 0x100;
    local_e8 = 0x50;
    puStack_220 = auStack_200;
    memset(puStack_350,0,0x101);
    local_344 = 0;
    memset(auStack_200,0,0x101);
    local_214 = 0;
    local_e4 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    uStack_368 = *param_2;
    local_370 = &PTR_LAB_04296170;
    local_70 = (long *)param_4[1];
    if (local_70 != (long *)0x0) {
      plVar1 = local_70 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_390 = &PTR_LAB_042962c0;
    local_388 = *param_3;
    local_380 = param_3[1];
    uStack_378 = param_3[2];
    local_78 = lVar4;
    (**(code **)(*DAT_04408a30 + 0x50))(param_1,DAT_04408a30,&local_370,&local_390);
    local_370 = &PTR_LAB_04296170;
    if (local_70 != (long *)0x0) {
      plVar1 = local_70 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  return;
}


