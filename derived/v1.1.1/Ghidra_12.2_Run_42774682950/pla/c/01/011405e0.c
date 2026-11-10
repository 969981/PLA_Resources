/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011405e0; name: FUN_011405e0
 */


void FUN_011405e0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x88128);
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x8811c));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01140654;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01140654:
  FUN_0114281c(param_1 + 0x880b0);
  *(undefined4 *)(param_1 + 0x88070) = 0;
  uVar3 = *(undefined8 *)PTR_DAT_04379570;
  uVar4 = *(undefined8 *)(PTR_DAT_04379570 + 8);
  lVar7 = 0;
  do {
    lVar2 = param_1 + lVar7;
    lVar7 = lVar7 + 0x440;
    *(undefined8 *)(lVar2 + 0x478) = 0;
    *(undefined8 *)(lVar2 + 0x470) = 0;
    *(undefined1 **)(lVar2 + 0x480) = &DAT_cbf29ce484222645;
    *(undefined4 *)(lVar2 + 0x488) = 0;
    *(undefined2 *)(lVar2 + 0x48c) = 0x180;
    *(undefined1 *)(lVar2 + 0xb3) = 1;
    *(undefined8 *)(lVar2 + 0xb4) = 0x1ffff00000000;
    *(undefined4 *)(lVar2 + 0xbc) = 0xffff00;
    *(undefined8 *)(lVar2 + 0x70) = 0;
    *(undefined8 *)(lVar2 + 0x78) = 0;
    *(undefined8 *)(lVar2 + 0x80) = uVar3;
    *(undefined8 *)(lVar2 + 0x88) = uVar4;
    *(undefined8 *)(lVar2 + 0xa0) = 0;
    *(undefined8 *)(lVar2 + 0xa8) = 0;
    *(undefined4 *)(lVar2 + 0xaf) = 0;
    *(undefined8 *)(lVar2 + 0x90) = 0;
    *(undefined8 *)(lVar2 + 0x98) = 0;
    *(undefined8 *)(lVar2 + 0xe8) = 0;
    *(undefined8 *)(lVar2 + 0xf0) = 0;
    *(undefined8 *)(lVar2 + 0xd8) = 0;
    *(undefined8 *)(lVar2 + 0xe0) = 0;
    *(undefined8 *)(lVar2 + 200) = 0;
    *(undefined8 *)(lVar2 + 0xd0) = 0;
    *(undefined8 *)(lVar2 + 0xf8) = 0;
    *(undefined8 *)(lVar2 + 0x100) = uVar3;
    *(undefined8 *)(lVar2 + 0x108) = uVar4;
    *(undefined8 *)(lVar2 + 0x110) = 0;
    *(undefined8 *)(lVar2 + 0x118) = 0;
    *(undefined8 *)(lVar2 + 0x120) = 0;
    *(undefined4 *)(lVar2 + 0x12f) = 0;
    *(undefined8 *)(lVar2 + 0x128) = 0;
    *(undefined1 *)(lVar2 + 0x133) = 1;
    *(undefined8 *)(lVar2 + 0x134) = 0x1ffff00000000;
    *(undefined4 *)(lVar2 + 0x13c) = 0xffff00;
    *(undefined8 *)(lVar2 + 0x168) = 0;
    *(undefined8 *)(lVar2 + 0x170) = 0;
    *(undefined8 *)(lVar2 + 0x158) = 0;
    *(undefined8 *)(lVar2 + 0x160) = 0;
    *(undefined8 *)(lVar2 + 0x148) = 0;
    *(undefined8 *)(lVar2 + 0x150) = 0;
    *(undefined8 *)(lVar2 + 0x178) = 0;
    *(undefined8 *)(lVar2 + 0x180) = uVar3;
    *(undefined8 *)(lVar2 + 0x188) = uVar4;
    *(undefined8 *)(lVar2 + 400) = 0;
    *(undefined8 *)(lVar2 + 0x198) = 0;
    *(undefined8 *)(lVar2 + 0x1a0) = 0;
    *(undefined4 *)(lVar2 + 0x1af) = 0;
    *(undefined8 *)(lVar2 + 0x1a8) = 0;
    *(undefined1 *)(lVar2 + 0x1b3) = 1;
    *(undefined8 *)(lVar2 + 0x1b4) = 0x1ffff00000000;
    *(undefined4 *)(lVar2 + 0x1bc) = 0xffff00;
    *(undefined8 *)(lVar2 + 0x208) = uVar4;
    *(undefined8 *)(lVar2 + 0x210) = 0;
    *(undefined8 *)(lVar2 + 0x220) = 0;
    *(undefined8 *)(lVar2 + 0x218) = 0;
    *(undefined8 *)(lVar2 + 0x1e8) = 0;
    *(undefined8 *)(lVar2 + 0x1f0) = 0;
    *(undefined8 *)(lVar2 + 0x1d8) = 0;
    *(undefined8 *)(lVar2 + 0x1e0) = 0;
    *(undefined8 *)(lVar2 + 0x1c8) = 0;
    *(undefined8 *)(lVar2 + 0x1d0) = 0;
    *(undefined8 *)(lVar2 + 0x1f8) = 0;
    *(undefined8 *)(lVar2 + 0x200) = uVar3;
    *(undefined4 *)(lVar2 + 0x22f) = 0;
    *(undefined8 *)(lVar2 + 0x228) = 0;
    *(undefined1 *)(lVar2 + 0x233) = 1;
    *(undefined8 *)(lVar2 + 0x234) = 0x1ffff00000000;
    *(undefined8 *)(lVar2 + 0x248) = 0;
    *(undefined4 *)(lVar2 + 0x23c) = 0xffff00;
    *(undefined8 *)(lVar2 + 0x270) = 0;
    *(undefined8 *)(lVar2 + 0x260) = 0;
    *(undefined8 *)(lVar2 + 0x250) = 0;
    *(undefined8 *)(lVar2 + 0x278) = 0;
    *(undefined8 *)(lVar2 + 0x268) = 0;
    *(undefined8 *)(lVar2 + 600) = 0;
    *(undefined8 *)(lVar2 + 0x288) = uVar4;
    *(undefined8 *)(lVar2 + 0x280) = uVar3;
    *(undefined4 *)(lVar2 + 0x2af) = 0;
    *(undefined8 *)(lVar2 + 0x290) = 0;
    *(undefined8 *)(lVar2 + 0x2a0) = 0;
    *(undefined8 *)(lVar2 + 0x2a8) = 0;
    *(undefined8 *)(lVar2 + 0x298) = 0;
    *(undefined1 *)(lVar2 + 0x2b3) = 1;
    *(undefined8 *)(lVar2 + 0x2b4) = 0x1ffff00000000;
    *(undefined8 *)(lVar2 + 0x2c8) = 0;
    *(undefined4 *)(lVar2 + 700) = 0xffff00;
    *(undefined8 *)(lVar2 + 0x2f0) = 0;
    *(undefined8 *)(lVar2 + 0x2e0) = 0;
    *(undefined8 *)(lVar2 + 0x2d0) = 0;
    *(undefined8 *)(lVar2 + 0x2f8) = 0;
    *(undefined8 *)(lVar2 + 0x2e8) = 0;
    *(undefined8 *)(lVar2 + 0x2d8) = 0;
    *(undefined8 *)(lVar2 + 0x308) = uVar4;
    *(undefined8 *)(lVar2 + 0x300) = uVar3;
    *(undefined4 *)(lVar2 + 0x32f) = 0;
    *(undefined8 *)(lVar2 + 0x310) = 0;
    *(undefined8 *)(lVar2 + 800) = 0;
    *(undefined8 *)(lVar2 + 0x328) = 0;
    *(undefined8 *)(lVar2 + 0x318) = 0;
    *(undefined1 *)(lVar2 + 0x333) = 1;
    *(undefined8 *)(lVar2 + 0x334) = 0x1ffff00000000;
    *(undefined8 *)(lVar2 + 0x348) = 0;
    *(undefined4 *)(lVar2 + 0x33c) = 0xffff00;
    *(undefined8 *)(lVar2 + 0x370) = 0;
    *(undefined8 *)(lVar2 + 0x360) = 0;
    *(undefined8 *)(lVar2 + 0x350) = 0;
    *(undefined8 *)(lVar2 + 0x378) = 0;
    *(undefined8 *)(lVar2 + 0x368) = 0;
    *(undefined8 *)(lVar2 + 0x358) = 0;
    *(undefined8 *)(lVar2 + 0x388) = uVar4;
    *(undefined8 *)(lVar2 + 0x380) = uVar3;
    *(undefined4 *)(lVar2 + 0x3af) = 0;
    *(undefined8 *)(lVar2 + 0x390) = 0;
    *(undefined8 *)(lVar2 + 0x3a0) = 0;
    *(undefined8 *)(lVar2 + 0x3a8) = 0;
    *(undefined8 *)(lVar2 + 0x398) = 0;
    *(undefined1 *)(lVar2 + 0x3b3) = 1;
    *(undefined8 *)(lVar2 + 0x3b4) = 0x1ffff00000000;
    *(undefined8 *)(lVar2 + 0x3c8) = 0;
    *(undefined4 *)(lVar2 + 0x3bc) = 0xffff00;
    *(undefined8 *)(lVar2 + 0x3f0) = 0;
    *(undefined8 *)(lVar2 + 0x3e0) = 0;
    *(undefined8 *)(lVar2 + 0x3d0) = 0;
    *(undefined8 *)(lVar2 + 0x3f8) = 0;
    *(undefined8 *)(lVar2 + 1000) = 0;
    *(undefined8 *)(lVar2 + 0x3d8) = 0;
    *(undefined8 *)(lVar2 + 0x408) = uVar4;
    *(undefined8 *)(lVar2 + 0x400) = uVar3;
    *(undefined4 *)(lVar2 + 0x42f) = 0;
    *(undefined8 *)(lVar2 + 0x410) = 0;
    *(undefined8 *)(lVar2 + 0x420) = 0;
    *(undefined8 *)(lVar2 + 0x428) = 0;
    *(undefined8 *)(lVar2 + 0x418) = 0;
    *(undefined1 *)(lVar2 + 0x433) = 1;
    *(undefined8 *)(lVar2 + 0x434) = 0x1ffff00000000;
    *(undefined8 *)(lVar2 + 0x448) = 0;
    *(undefined4 *)(lVar2 + 0x43c) = 0xffff00;
    *(undefined8 *)(lVar2 + 0x450) = 0;
    *(undefined8 *)(lVar2 + 0x460) = 0;
    *(undefined8 *)(lVar2 + 0x468) = 0;
    *(undefined8 *)(lVar2 + 0x458) = 0;
  } while (lVar7 != 0x88000);
  *plVar1 = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x8811c));
  return;
}


