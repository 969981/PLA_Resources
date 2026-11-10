/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005f39c8; name: FUN_005f39c8
 */


void FUN_005f39c8(long param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  
  if (PTR_DAT_04375168[0x10] == '\0') {
    cVar2 = *(char *)(param_1 + 0x28);
  }
  else {
    lVar7 = *(long *)(param_1 + 8);
    uVar8 = *(ulong *)(lVar7 + 0x28);
    if (uVar8 < 2) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",0x136,
                    "operator[]");
    }
    uVar5 = *(undefined8 *)(lVar7 + 0x18);
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    if ((uVar8 & 1) == 0) {
      lVar9 = lVar7 + 0x30;
    }
    else {
      lVar9 = *(long *)(lVar7 + 0x30);
    }
    uVar3 = FUN_003d3430(*(undefined4 *)(param_1 + 0x24));
    uVar4 = FUN_003d3430(param_2);
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/round_robin/round_robin.cc"
                 ,0x179,1,
                 "[RR %p] connectivity changed for subchannel %p, subchannel_list %p (index %lu of %lu): prev_state=%s new_state=%s"
                 ,uVar5,uVar10,lVar7,(param_1 - lVar9 >> 4) * -0x5555555555555555,uVar8 >> 1,uVar3,
                 uVar4);
    cVar2 = *(char *)(param_1 + 0x28);
  }
  if (cVar2 == '\0') {
    if (param_2 == 3) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar1 = *(undefined4 *)(param_1 + 0x24);
      *(undefined1 *)(param_1 + 0x28) = 1;
      iVar6 = 3;
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar1 = *(undefined4 *)(param_1 + 0x24);
      iVar6 = param_2;
    }
    FUN_005f4124(uVar5,uVar1,iVar6);
  }
  else if (param_2 == 2) {
    lVar7 = *(long *)(param_1 + 8);
    *(undefined1 *)(param_1 + 0x28) = 0;
    if (*(long *)(lVar7 + 0x228) == 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/round_robin/round_robin.cc"
                   ,0x121,2,"assertion failed: %s","num_transient_failure_ > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar7 + 0x228) = *(long *)(lVar7 + 0x228) + -1;
    *(long *)(lVar7 + 0x218) = *(long *)(lVar7 + 0x218) + 1;
  }
  *(int *)(param_1 + 0x24) = param_2;
  return;
}


