/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d21790; name: FUN_00d21790
 */


bool FUN_00d21790(long param_1)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  long *local_40;
  long local_38;
  long local_28;
  
  if (*(int *)(param_1 + 0x538) < *(int *)(param_1 + 0x53c)) {
    iVar1 = *(int *)(param_1 + 0x538) + 1;
    iVar4 = *(int *)(param_1 + 0x504);
    *(int *)(param_1 + 0x538) = iVar1;
    *(ulong *)(param_1 + 0x548) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x548) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_1 + 0x558) >> 0x20),
                  (float)*(undefined8 *)(param_1 + 0x548) + (float)*(undefined8 *)(param_1 + 0x558))
    ;
    *(ulong *)(param_1 + 0x540) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x540) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_1 + 0x550) >> 0x20),
                  (float)*(undefined8 *)(param_1 + 0x540) + (float)*(undefined8 *)(param_1 + 0x550))
    ;
    if (*(int *)(param_1 + 0x53c) <= iVar1 && iVar4 == 2) {
      FUN_00d23460(param_1,*(undefined4 *)(param_1 + 0x500));
      iVar4 = *(int *)(param_1 + 0x504);
    }
    bVar2 = true;
  }
  else {
    *(undefined8 *)(param_1 + 0x540) = *(undefined8 *)(param_1 + 0x560);
    *(undefined8 *)(param_1 + 0x548) = *(undefined8 *)(param_1 + 0x568);
    iVar4 = *(int *)(param_1 + 0x504);
    bVar2 = iVar4 != 3;
    *(undefined8 *)(param_1 + 0x538) = 0;
  }
  fVar7 = *(float *)(param_1 + 0x54c);
  if (iVar4 == 3) {
    local_28 = *(long *)(param_1 + 0x520);
    if (local_28 == 0) {
      return bVar2;
    }
    local_38 = *(long *)(param_1 + 0x4f8);
    lVar6 = *(long *)(local_38 + 0x88);
    if (*(code **)(local_38 + 0x560) == (code *)0x0) {
      plVar3 = *(long **)(lVar6 + 0x18);
      lVar6 = (**(code **)(*plVar3 + 0x78))(plVar3,local_28,1);
    }
    else {
      (**(code **)(local_38 + 0x560))(&local_40,local_38 + 0x580,&local_28,&local_38);
      plVar3 = *(long **)(lVar6 + 0x18);
      if (local_40 == (long *)0x0) {
        plVar5 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar5 = local_40 + 0xc;
      }
      lVar6 = (**(code **)(*plVar3 + 0x78))(plVar3,*plVar5,1);
      if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 0x20))();
      }
    }
  }
  else {
    if (iVar4 != 2) {
      return bVar2;
    }
    local_28 = *(long *)(param_1 + 0x510);
    if (local_28 == 0) {
      return bVar2;
    }
    local_38 = *(long *)(param_1 + 0x4f8);
    lVar6 = *(long *)(local_38 + 0x88);
    if (*(code **)(local_38 + 0x560) == (code *)0x0) {
      plVar3 = *(long **)(lVar6 + 0x18);
      lVar6 = (**(code **)(*plVar3 + 0x78))(plVar3,local_28,1);
    }
    else {
      (**(code **)(local_38 + 0x560))(&local_40,local_38 + 0x580,&local_28,&local_38);
      plVar3 = *(long **)(lVar6 + 0x18);
      if (local_40 == (long *)0x0) {
        plVar5 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar5 = local_40 + 0xc;
      }
      lVar6 = (**(code **)(*plVar3 + 0x78))(plVar3,*plVar5,1);
      if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 0x20))();
      }
    }
  }
  if (lVar6 != 0) {
    *(char *)(lVar6 + 0x59) = (char)(int)fVar7;
  }
  return bVar2;
}


