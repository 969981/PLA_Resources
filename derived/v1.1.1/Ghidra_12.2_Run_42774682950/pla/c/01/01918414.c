/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01918414; name: FUN_01918414
 */


void FUN_01918414(void *param_1,long param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *local_18;
  
  if (*(long *)(param_2 + 0x278) == 0) {
    local_18 = (long *)0x0;
  }
  else {
    FUN_0191cb34(&local_18);
    if (local_18 != (long *)0x0) {
      FUN_01920ae0(param_1,local_18,param_3);
      if (local_18 == (long *)0x0) {
        return;
      }
      lVar5 = local_18[0xb];
      piVar1 = (int *)(lVar5 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar5 + 0x18) = 0;
        (**(code **)(*local_18 + 0x20))();
        return;
      }
      return;
    }
  }
  memset(param_1,0,0x168);
  *(undefined4 *)((long)param_1 + 0x10) = 10;
  *(undefined8 *)((long)param_1 + 0x70) = 0;
  *(undefined8 *)((long)param_1 + 0x78) = 0;
  *(undefined4 *)((long)param_1 + 0x160) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0x3f80000000000001;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x158) = 0;
  *(undefined8 *)((long)param_1 + 0x168) = 0;
  *(undefined4 *)((long)param_1 + 0x170) = 0;
  *(undefined4 *)((long)param_1 + 0x150) = 0;
  *(undefined1 **)((long)param_1 + 0x60) = &DAT_cbf29ce484222645;
  *(undefined1 **)((long)param_1 + 0x68) = &DAT_03996322;
  *(undefined1 **)((long)param_1 + 0x80) = &DAT_cbf29ce484222645;
  *(undefined1 **)((long)param_1 + 0x88) = &DAT_03996322;
  *(undefined1 **)((long)param_1 + 0xa0) = &DAT_cbf29ce484222645;
  *(undefined1 **)((long)param_1 + 0xa8) = &DAT_03996322;
  *(undefined1 **)((long)param_1 + 0xc0) = &DAT_cbf29ce484222645;
  *(undefined1 **)((long)param_1 + 200) = &DAT_03996322;
  *(undefined1 **)((long)param_1 + 0xe0) = &DAT_cbf29ce484222645;
  *(undefined1 **)((long)param_1 + 0xe8) = &DAT_03996322;
  *(undefined1 **)((long)param_1 + 0x100) = &DAT_cbf29ce484222645;
  *(undefined1 **)((long)param_1 + 0x108) = &DAT_03996322;
  *(undefined4 *)((long)param_1 + 0x174) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x90) = 0;
  *(undefined8 *)((long)param_1 + 0x98) = 0;
  *(undefined8 *)((long)param_1 + 0xb0) = 0;
  *(undefined8 *)((long)param_1 + 0xb8) = 0;
  *(undefined8 *)((long)param_1 + 0xd0) = 0;
  *(undefined8 *)((long)param_1 + 0xd8) = 0;
  *(undefined8 *)((long)param_1 + 0xf0) = 0;
  *(undefined8 *)((long)param_1 + 0xf8) = 0;
  *(undefined8 *)((long)param_1 + 0x140) = 0;
  *(undefined8 *)((long)param_1 + 0x148) = 0;
  *(undefined8 *)((long)param_1 + 0x130) = 0;
  *(undefined8 *)((long)param_1 + 0x138) = 0;
  *(undefined8 *)((long)param_1 + 0x120) = 0;
  *(undefined8 *)((long)param_1 + 0x128) = 0;
  *(undefined8 *)((long)param_1 + 0x110) = 0;
  *(undefined8 *)((long)param_1 + 0x118) = 0;
  return;
}


