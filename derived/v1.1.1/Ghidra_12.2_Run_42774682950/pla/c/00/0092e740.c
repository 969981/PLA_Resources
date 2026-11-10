/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0092e740; name: FUN_0092e740
 */


void FUN_0092e740(long param_1,long *param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *local_28;
  long *local_18;
  
  if (param_3 < 0x3ad) {
    if (param_3 < 0x205) {
      if (param_3 < 0x104) {
        if (param_3 == 0x102) {
          lVar6 = 10;
        }
        else {
          if (param_3 != 0x103) goto switchD_0092e788_caseD_206;
          lVar6 = 0xb;
        }
      }
      else if (param_3 == 0x181) {
        lVar6 = 8;
      }
      else {
        if (param_3 != 0x104) goto switchD_0092e788_caseD_206;
        lVar6 = 0xc;
      }
    }
    else {
      lVar6 = 0;
      switch(param_3) {
      case 0x205:
        lVar6 = 0x22;
        break;
      default:
        goto switchD_0092e788_caseD_206;
      case 0x26f:
        lVar6 = 0x12;
        break;
      case 0x271:
        lVar6 = 0x13;
        break;
      case 0x273:
        lVar6 = 0x10;
        break;
      case 0x275:
        lVar6 = 0x11;
        break;
      case 0x277:
        lVar6 = 0x14;
        break;
      case 0x279:
        lVar6 = 0x15;
        break;
      case 0x27b:
        lVar6 = 0xe;
        break;
      case 0x27d:
        lVar6 = 0xf;
        break;
      case 0x27f:
        lVar6 = 0x16;
        break;
      case 0x281:
        lVar6 = 0x17;
        break;
      case 0x283:
        lVar6 = 0x18;
        break;
      case 0x285:
        lVar6 = 0x19;
        break;
      case 0x287:
        lVar6 = 0x1a;
        break;
      case 0x289:
        lVar6 = 0x1b;
        break;
      case 0x28b:
        break;
      case 0x28d:
        lVar6 = 1;
        break;
      case 0x28f:
        lVar6 = 2;
        break;
      case 0x291:
        lVar6 = 3;
        break;
      case 0x293:
        lVar6 = 4;
        break;
      case 0x295:
        lVar6 = 6;
        break;
      case 0x29b:
        lVar6 = 0x1c;
        break;
      case 0x29d:
        lVar6 = 0x1d;
        break;
      case 0x29f:
        lVar6 = 0x1e;
        break;
      case 0x2a1:
        lVar6 = 0x1f;
        break;
      case 0x2a3:
        lVar6 = 0x20;
        break;
      case 0x2a5:
        lVar6 = 0x21;
        break;
      case 0x2a7:
        lVar6 = 0xd;
        break;
      case 0x2cb:
        lVar6 = 9;
      }
    }
  }
  else {
    switch(param_3) {
    case 0x3ad:
      lVar6 = 5;
      break;
    case 0x3ae:
    case 0x3b0:
    case 0x3b2:
switchD_0092e788_caseD_206:
      param_2 = (long *)*param_2;
      local_28 = param_2;
      if (param_2 == (long *)0x0) {
        FUN_0092ee20(param_1,&local_28,param_3,0);
        return;
      }
      plVar1 = param_2 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_0092ee20(param_1,&local_28,param_3,0);
      if (param_2 == (long *)0x0) {
        return;
      }
      plVar1 = param_2 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0092e87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 0x10))(param_2);
        return;
      }
      return;
    case 0x3af:
      lVar6 = 7;
      break;
    case 0x3b1:
      lVar6 = 0x23;
      break;
    case 0x3b3:
      lVar6 = 0x24;
      break;
    default:
      if (param_3 == 0x3f1) {
        lVar6 = 0x25;
      }
      else {
        if (param_3 != 0x3f3) goto switchD_0092e788_caseD_206;
        lVar6 = 0x26;
      }
    }
  }
  pcVar2 = (code *)(&PTR_FUN_041b81c0)[lVar6 * 3];
  lVar6 = (&DAT_041b81c8)[lVar6 * 3];
  local_18 = (long *)*param_2;
  if (local_18 != (long *)0x0) {
    plVar1 = local_18 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (*pcVar2)(param_1 + (lVar6 >> 1),&local_18,param_3,param_4);
  if (local_18 != (long *)0x0) {
    plVar1 = local_18 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_18 + 0x10))();
    }
  }
  return;
}


