/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c15554; name: FUN_02c15554
 */


bool FUN_02c15554(double param_1,uint *param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  int local_54;
  
  uVar6 = (ulong)*param_2;
  if (uVar6 < *(ulong *)(param_2 + 2)) {
    dVar7 = 0.0;
    do {
      nn::os::GetSystemTick();
      lVar3 = nn::os::ConvertToTimeSpan();
      local_54 = (int)uVar6;
      (*(code *)*param_3)(param_3 + 4,&local_54);
      *param_2 = *param_2 + 1;
      nn::os::GetSystemTick();
      lVar4 = nn::os::ConvertToTimeSpan();
      dVar7 = dVar7 + (double)(lVar4 - lVar3) / 1000000000.0;
      if (param_1 < dVar7) {
        bVar1 = (ulong)*param_2 <= *(ulong *)(param_2 + 2);
        bVar2 = *(ulong *)(param_2 + 2) == (ulong)*param_2;
        goto LAB_02c1561c;
      }
      uVar5 = *(ulong *)(param_2 + 2);
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar6 < uVar5);
    bVar1 = *param_2 <= uVar5;
    bVar2 = uVar5 == *param_2;
LAB_02c1561c:
    bVar2 = !bVar1 || bVar2;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}


