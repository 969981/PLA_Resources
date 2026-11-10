/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d21a20; name: FUN_00d21a20
 */


void FUN_00d21a20(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *local_38;
  long local_30;
  long lStack_28;
  
  if (*(int *)(param_1 + 0x500) != 1) {
    *(undefined8 *)(param_1 + 0x538) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x504);
  if (iVar3 == 3) {
    if (*(char *)(param_1 + 0x581) != '\0') {
      *(undefined4 *)(param_1 + 0x504) = 4;
      *(undefined1 *)(param_1 + 0x581) = 0;
      return;
    }
    lVar2 = *(long *)(param_1 + 0x520);
    if (lVar2 != 0) {
      lVar4 = *(long *)(param_1 + 0x4f8);
      lVar6 = *(long *)(lVar4 + 0x88);
      if (*(code **)(lVar4 + 0x560) == (code *)0x0) {
        plVar1 = *(long **)(lVar6 + 0x18);
        lVar2 = (**(code **)(*plVar1 + 0x78))(plVar1,lVar2,1);
      }
      else {
        local_30 = lVar4;
        lStack_28 = lVar2;
        (**(code **)(lVar4 + 0x560))(&local_38,lVar4 + 0x580,&lStack_28,&local_30);
        plVar1 = *(long **)(lVar6 + 0x18);
        if (local_38 == (long *)0x0) {
          plVar5 = (long *)PTR_PTR_04379d00;
        }
        else {
          plVar5 = local_38 + 0xc;
        }
        lVar2 = (**(code **)(*plVar1 + 0x78))(plVar1,*plVar5,1);
        if (local_38 != (long *)0x0) {
          (**(code **)(*local_38 + 0x20))();
        }
      }
      if (lVar2 != 0) {
        *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
      }
      *(undefined8 *)(param_1 + 0x520) = 0;
    }
    if (*(int *)(param_1 + 0x518) != -1) {
      FUN_00d23ac8(param_1);
      *(undefined4 *)(param_1 + 0x518) = 0xffffffff;
    }
    iVar3 = *(int *)(param_1 + 0x504);
  }
  if (iVar3 == 2) {
    lVar2 = *(long *)(param_1 + 0x510);
    if (lVar2 != 0) {
      lVar4 = *(long *)(param_1 + 0x4f8);
      lVar6 = *(long *)(lVar4 + 0x88);
      if (*(code **)(lVar4 + 0x560) == (code *)0x0) {
        plVar1 = *(long **)(lVar6 + 0x18);
        lVar2 = (**(code **)(*plVar1 + 0x78))(plVar1,lVar2,1);
      }
      else {
        local_30 = lVar4;
        lStack_28 = lVar2;
        (**(code **)(lVar4 + 0x560))(&local_38,lVar4 + 0x580,&lStack_28,&local_30);
        plVar1 = *(long **)(lVar6 + 0x18);
        if (local_38 == (long *)0x0) {
          plVar5 = (long *)PTR_PTR_04379d00;
        }
        else {
          plVar5 = local_38 + 0xc;
        }
        lVar2 = (**(code **)(*plVar1 + 0x78))(plVar1,*plVar5,1);
        if (local_38 != (long *)0x0) {
          (**(code **)(*local_38 + 0x20))();
        }
      }
      if (lVar2 != 0) {
        *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
      }
      *(undefined8 *)(param_1 + 0x510) = 0;
    }
    if (*(int *)(param_1 + 0x50c) == -1) {
      lVar2 = *(long *)(param_1 + 0x530);
    }
    else {
      FUN_00d23ac8(param_1);
      *(undefined4 *)(param_1 + 0x50c) = 0xffffffff;
      lVar2 = *(long *)(param_1 + 0x530);
    }
    if (lVar2 != 0) {
      lVar4 = *(long *)(param_1 + 0x4f8);
      lVar6 = *(long *)(lVar4 + 0x88);
      if (*(code **)(lVar4 + 0x560) == (code *)0x0) {
        plVar1 = *(long **)(lVar6 + 0x18);
        lVar2 = (**(code **)(*plVar1 + 0x78))(plVar1,lVar2,1);
      }
      else {
        local_30 = lVar4;
        lStack_28 = lVar2;
        (**(code **)(lVar4 + 0x560))(&local_38,lVar4 + 0x580,&lStack_28,&local_30);
        plVar1 = *(long **)(lVar6 + 0x18);
        if (local_38 == (long *)0x0) {
          plVar5 = (long *)PTR_PTR_04379d00;
        }
        else {
          plVar5 = local_38 + 0xc;
        }
        lVar2 = (**(code **)(*plVar1 + 0x78))(plVar1,*plVar5,1);
        if (local_38 != (long *)0x0) {
          (**(code **)(*local_38 + 0x20))();
        }
      }
      if (lVar2 != 0) {
        *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
      }
      *(undefined8 *)(param_1 + 0x530) = 0;
    }
    if (*(int *)(param_1 + 0x528) != -1) {
      FUN_00d23ac8(param_1);
      *(undefined4 *)(param_1 + 0x528) = 0xffffffff;
    }
  }
  *(undefined4 *)(param_1 + 0x504) = 1;
  return;
}


