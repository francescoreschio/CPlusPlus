#ifndef AnalysisSteering_h
#define AnalysisSteering_h

class AnalysisInfo;
class Event;

class AnalysisSteering {

 public:

  AnalysisSteering( const AnalysisInfo* info );
  // deleted copy constructor and assignment to prevent unadvertent copy
  AnalysisSteering           ( const AnalysisSteering& x ) = delete;
  AnalysisSteering& operator=( const AnalysisSteering& x ) = delete;

  virtual ~AnalysisSteering();

  // function to be called at execution start
  virtual void beginJob() = 0;
  // function to be called at execution end
  virtual void   endJob() = 0;
  
 protected:

  const AnalysisInfo* aInfo;

};

#endif

