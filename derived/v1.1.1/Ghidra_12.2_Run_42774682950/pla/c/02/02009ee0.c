/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02009ee0; name: FUN_02009ee0
 */


void FUN_02009ee0(undefined8 param_1)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = 4;
  uStack_20 = 0;
  local_30 = 8;
  local_18 = param_1;
  FUN_02009f40(&local_18,"PhysicsData","maxSlope",&uStack_20,"slidingSlope",&local_28,
               "maxSlidingSpeed",&local_30);
  return;
}


