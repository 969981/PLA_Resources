/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013aeb90; name: FUN_013aeb90
 */


ulong FUN_013aeb90(ulong param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  undefined1 auStack_618 [15];
  char local_609;
  char local_350 [8];
  undefined1 auStack_348 [792];
  long *local_28;
  
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 0x28:
    uVar6 = FUN_013c60b0(*(undefined8 *)(param_1 + 0xc0),9);
joined_r0x013aeda0:
    if ((uVar6 & 1) != 0) {
      uVar7 = 0x29;
LAB_013aebe4:
      *(undefined4 *)(param_1 + 0xac) = uVar7;
    }
    break;
  case 0x29:
    uVar6 = FUN_013c6220(*(undefined8 *)(param_1 + 0xc0),1);
    if ((uVar6 & 1) != 0) {
      uVar7 = 0x2a;
      goto LAB_013aebe4;
    }
    uVar6 = FUN_013c6220(*(undefined8 *)(param_1 + 0xc0),2);
    if ((uVar6 & 1) == 0) break;
    uVar6 = FUN_013c6230(*(undefined8 *)(param_1 + 0xc0));
    if (((uVar6 & 0xff) != 0) &&
       (FUN_01395b04(local_350,param_1 + 0x120,uVar6 >> 0x20), local_350[0] != '\0')) {
      if (((*PTR_DAT_04379558 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
      FUN_0114924c(&local_28);
      if (local_28 == (long *)0x0) {
        iVar5 = 0;
      }
      else {
        FUN_01395584(auStack_618,auStack_348);
        iVar5 = FUN_0139557c(auStack_348);
        if (iVar5 == 0) {
          if ((local_609 == '\x01') &&
             (uVar6 = FUN_01396eb0(*(undefined8 *)(param_1 + 0xa0)), (uVar6 & 1) != 0)) {
            uVar7 = 0x2e;
            goto LAB_013aed3c;
          }
          FUN_013b0a50(param_1 + 0x168,local_350);
          uVar8 = 9;
          if (*(int *)(param_1 + 0xb4) != 0) {
            uVar8 = 10;
          }
          param_1 = (ulong)uVar8;
          iVar5 = 1;
        }
        else {
          uVar7 = 0x2c;
LAB_013aed3c:
          *(undefined4 *)(param_1 + 0xac) = uVar7;
          iVar5 = 2;
        }
        if (local_28 != (long *)0x0) {
          lVar9 = local_28[0xb];
          piVar1 = (int *)(lVar9 + 0xc);
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
            *(undefined8 *)(lVar9 + 0x18) = 0;
            (**(code **)(*local_28 + 0x20))();
          }
        }
      }
      if (local_350[0] != '\0') {
        FUN_01395560(auStack_348);
      }
      if (iVar5 == 2) break;
      if (iVar5 == 1) goto LAB_013aeca0;
    }
    param_1 = 0xe;
LAB_013aeca0:
    uVar6 = 1;
    goto LAB_013aebec;
  case 0x2a:
    uVar6 = FUN_013c60b0(*(undefined8 *)(param_1 + 0xc0),0xb);
    if ((uVar6 & 1) != 0) {
      uVar7 = 0x2b;
      goto LAB_013aebe4;
    }
    break;
  case 0x2b:
    uVar6 = FUN_013c6200(*(undefined8 *)(param_1 + 0xc0),0xb);
    if ((uVar6 & 1) != 0) {
      uVar6 = FUN_013c6220(*(undefined8 *)(param_1 + 0xc0),4);
      if ((uVar6 & 1) != 0) {
        param_1 = 0;
        goto LAB_013aeca0;
      }
      uVar6 = FUN_013c6220(*(undefined8 *)(param_1 + 0xc0),5);
      if ((uVar6 & 1) != 0) {
        uVar6 = FUN_013c60b0(*(undefined8 *)(param_1 + 0xc0),10);
        goto joined_r0x013aeda0;
      }
    }
    break;
  case 0x2c:
    uVar6 = FUN_013c60b0(*(undefined8 *)(param_1 + 0xc0),0x1e);
    if ((uVar6 & 1) != 0) {
      uVar7 = 0x2d;
      goto LAB_013aebe4;
    }
    break;
  case 0x2d:
  case 0x2f:
    uVar6 = FUN_013c6220(*(undefined8 *)(param_1 + 0xc0),1);
    if ((uVar6 & 1) != 0) {
      uVar7 = 0x28;
      goto LAB_013aebe4;
    }
    break;
  case 0x2e:
    uVar6 = FUN_013c60b0(*(undefined8 *)(param_1 + 0xc0),0x1f);
    if ((uVar6 & 1) != 0) {
      uVar7 = 0x2f;
      goto LAB_013aebe4;
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar6 = 0;
LAB_013aebec:
  return uVar6 | param_1 << 0x20;
}


