/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0300d864; name: FUN_0300d864
 */


void FUN_0300d864(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *local_250 [2];
  long *local_240 [64];
  
  if (param_3 != 0) {
    plVar3 = (long *)(param_3 + 0x20);
    local_240[0] = param_2;
    lVar2 = FUN_0300dad0(plVar3,local_240);
    if ((lVar2 != 0) &&
       (-1 < (int)(*(uint *)(lVar2 + 4) |
                  ((int)lVar2 - (int)*(undefined8 *)(param_3 + 0x30)) * 0x20000000))) {
      local_240[0] = param_2;
      lVar2 = FUN_0300dad0(plVar3,local_240);
      if ((lVar2 == 0) ||
         (plVar3 = *(long **)(*plVar3 + (long)*(int *)(lVar2 + 4) * 0x10 + 8), plVar3 != (long *)0x0
         )) {
        FUN_032d645c(plVar3);
      }
      goto LAB_0300da04;
    }
  }
  switch((char)param_2[3]) {
  case '\x01':
    FUN_0300dd00(local_240,param_2);
    plVar3 = local_240[0];
    break;
  case '\x02':
    FUN_0300ddd4(local_240,param_2);
    plVar3 = local_240[0];
    break;
  case '\x03':
    FUN_0300de8c(local_240,param_2);
    plVar3 = local_240[0];
    break;
  case '\x04':
    FUN_0300df00(local_240,param_2);
    plVar3 = local_240[0];
    break;
  default:
    FUN_0331fefc(local_250,local_240,0x200);
    FUN_0332448c(local_250,"Unknown motor type.");
    iVar1 = FUN_03320b30(0x29ce6436,local_240,
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Physics/Physics/Dynamics/Constraint/Motor/hknpConstraintMotor.cpp"
                         ,0x49);
    if (iVar1 != 0) {
      CallSupervisor(0x26);
    }
    FUN_0331ff7c(local_250);
    *param_1 = 0;
    return;
  }
  if (param_3 != 0) {
    local_250[0] = plVar3;
    local_240[0] = param_2;
    FUN_0300da20(param_3 + 0x20,local_240,local_250);
  }
LAB_0300da04:
  *param_1 = (long)plVar3;
  return;
}


